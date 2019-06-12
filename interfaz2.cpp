#include <alcommon/alproxy.h>
#include <alcommon/albroker.h>
#include <alproxies/alvideodeviceproxy.h>
#include <alvision/alvisiondefinitions.h>
#include "interfaz2.h"
#include "ui_interfaz2.h"
#include<QTimer>
#include <iostream>

interfaz2::interfaz2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interfaz2)
{   
    ncam=0;
    n_scan = 10;
    ui->setupUi(this);
    connect(ui->sscan, SIGNAL(valueChanged(int)), this, SLOT(num_scan(int)));
    connect(ui->hyaw, SIGNAL(valueChanged(int)), this, SLOT(moveyaw(int)));
    connect(ui->hpitch, SIGNAL(valueChanged(int)), this, SLOT(movepitch(int)));

}

interfaz2::~interfaz2()
{

    
    delete ui;
    
}

void interfaz2::on_conectar_clicked()
{
     std::cout<<"conectar"<<std::endl;
     try
 {
  ui->conectar->setStyleSheet("background-color:#6bff43;");
  QString a = ui->lineEdit->text();
  ipRobot = a.toStdString();
  broker = AL::ALBroker::createBroker("Broker", "0.0.0.0",54000, ipRobot, 9559);
  // 54000
 }
 catch (const AL::ALError& e)
       {
         std::cerr << "Caught exception " << e.what() << std::endl;
       }

}

void interfaz2::on_conectar_cam_clicked()
{
    imgHeader = cv::Mat(cv::Size(640, 480), CV_8UC3);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(horizont_line()));
    connect(timer, SIGNAL(timeout()), this, SLOT(binari()));
    connect(timer, SIGNAL(timeout()), this, SLOT(frameadqui()));
    timer->start(10);
}

void interfaz2::on_adelante_clicked()
{
     try
  {
      vl++;
    if (vl >  10)
    {
     vl =10;
    }
    AL::ALProxy proxy(broker, "ALMotion");
    proxy.callVoid("moveToward",vl/10,0,va/10);
    ui->label_13->setText(QString::number(vl/10));
    }
    
    catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void interfaz2::on_home_clicked()
{
      try
  {
  vl=0;va=0,hu=0,hr=0;
  AL::ALProxy proxy(broker, "ALRobotPosture");
  proxy.callVoid("goToPosture","StandInit", 0.5);
  }
  catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            } 
}

void interfaz2::on_atras_clicked()
{
       try 
    {
       vl--;
    if (vl < -10)
    {
     vl =-10;
    }
    AL::ALProxy proxy(broker, "ALMotion");
    proxy.callVoid("moveToward",vl/10,0,va/10);
    ui->label_13->setText(QString::number(vl/10));
    }
    catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void interfaz2::on_izquierda_clicked()
{
 
    try
   {
    va++;
    if (va > 10)
    {
     va =10;
    }
    AL::ALProxy proxy(broker, "ALMotion");
    proxy.callVoid("moveToward",vl/10,0,va/10);
    ui->label_24->setText(QString::number(va/10));
    }
    catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void interfaz2::on_derecha_clicked()
{
       try
    {
    va--;
    if (va < -10)
    {
     va =-10;
    }
    AL::ALProxy proxy(broker, "ALMotion");
    proxy.callVoid("moveToward",vl/10,0,va/10);
    ui->label_24->setText(QString::number(va/10));
    }
    catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void interfaz2::on_detener_clicked()
{
         try
    {
    vl=0,va=0;
    AL::ALProxy proxy(broker, "ALMotion");
    proxy.callVoid("moveToward",0,0,0);
    AL::ALProxy proxyc(broker, "ALRobotPosture");
    proxyc.callVoid("goToPosture","Crouch", 0.5);
    proxy.callVoid("setStiffnesses","Body",0);
    ui->label_13->setText(QString::number(vl/10));
    ui->label_24->setText(QString::number(va/10));
    }
    catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void interfaz2::moveyaw(int c)
{
  try
  {
  yaw = c;
  yaw = yaw/10; 
  AL::ALProxy proxy(broker, "ALMotion");
  proxy.callVoid("setAngles","HeadYaw",yaw,0.1);
  }
  catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }


}

void interfaz2::movepitch(int d)
{
    try
  {
  pitch = d;
  pitch = pitch/10;
  AL::ALProxy proxy(broker, "ALMotion");
  proxy.callVoid("setAngles","HeadPitch",pitch,0.1);
  }
  catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void interfaz2::on_comboBox_activated(int index)
{
   ncam = static_cast <int> (index);
}

void interfaz2::frameadqui()
{
       try
            {
            AL::ALProxy proxy(broker, "ALVideoDevice");
            proxy.callVoid("setParam",18,ncam);
            camera = proxy.call<std::string>("subscribe","test", AL::kVGA, AL::kRGBColorSpace, 30);
            results = proxy.call<AL::ALValue>("getImageRemote",camera);
            imgHeader.data = (uchar*)results[6].GetBinary();
            nl = imgHeader.rows;
            nc = imgHeader.cols * imgHeader.channels();
            //QImage image1 = QImage((uchar*) imgHeader.data, imgHeader.cols, imgHeader.rows, imgHeader.step, QImage::Format_RGB888);
            //ui->camera->setPixmap(QPixmap::fromImage(image1));           
            //
            proxy.callVoid("unsubscribe",camera);
            QImage image1 = QImage((uchar*) imgHeader.data, imgHeader.cols, imgHeader.rows, imgHeader.step, QImage::Format_RGB888);
            
            
            
            }
            catch (const AL::ALError& e)
            {
                std::cerr << "Caught exception " << e.what() << std::endl;
            }
}

void::interfaz2::binari()
{
  cv::Mat g(480,640,CV_8UC3,cv::Scalar::all(0));  //creacion del contenedor de la imagen resultante 
    cv::Mat res(480,640,CV_8UC3,cv::Scalar::all(0));
  for (int j =ly1; j<nl;j++)
    {
       uchar* data = imgHeader.ptr<uchar>(j);
       uchar* datar = g.ptr<uchar>(j);
       uchar* datagr = res.ptr<uchar>(j);
       uchar* datagr2 = res.ptr<uchar>(j-1);
          for (int i= 1; i<nc;i=i+(3*n_scan))
          {       
            
               B = data[i-1];
               G = data[i];
               R = data[i+1];
               gr  = G / (R+G+B) * 255;
               datar[i] = gr;
                 if (gr > 95  && gr < 190 )
                  {   
                   datagr[i] = 200;
                  } 
               
               //aplicacion de la derivada para encontrar los bordes en la imagen segmentada
              /* poin =abs(datagr[i]-datagr2[i]);
              if (poin > 100)
                 contours.push_back(cv::Point((i/3 ),j));*/
          }
    }
      for (int j =ly1; j<nl-1;j++)
    {

       uchar* datagr = res.ptr<uchar>(j);
       uchar* datagr2 = res.ptr<uchar>(j+1);
          for (int i= 1; i<nc;i=i+(3*n_scan))
          {       
            
               
              // aplicacion de la derivada para encontrar los bordes en la imagen segmentada
               poin =abs(datagr[i]-datagr2[i]);
              if (poin > 100)
                 contours.push_back(cv::Point((i/3 ),j));
          }
    }
        for (int z = 0;z<contours.size();z++)
         {   
          circle( imgHeader, contours[z], 2, cv::Scalar(255,0,0), 2);
         }
    
   contours.clear();
   line(imgHeader,cv::Point(0, ly1),cv::Point( 640, ly2), cv::Scalar(255,0,0),3, CV_AA);
    QImage image1 = QImage((uchar*) imgHeader.data, imgHeader.cols, imgHeader.rows, imgHeader.step, QImage::Format_RGB888);
            ui->camera->setPixmap(QPixmap::fromImage(image1));
   
    QImage qOriginalImage((uchar*)res.data, res.cols, res.rows, res.step, QImage::Format_RGB888);
      ui->binari->setPixmap(QPixmap::fromImage(qOriginalImage));
}

void interfaz2::horizont_line ()
{
  AL::ALProxy proxym(broker, "ALMemory");
  AL::ALValue sen_x = proxym.call<AL::ALValue>("getData","Device/SubDeviceList/InertialSensor/AngleX/Sensor/Value");
  AL::ALValue sen_y = proxym.call<AL::ALValue>("getData","Device/SubDeviceList/InertialSensor/AngleY/Sensor/Value");
  AL::ALValue cabeceo = proxym.call<AL::ALValue>("getData","Device/SubDeviceList/HeadYaw/Position/Sensor/Value");
  AL::ALValue giro = proxym.call<AL::ALValue>("getData","Device/SubDeviceList/HeadPitch/Position/Sensor/Value");
  
  sen_x = static_cast <double> (sen_x);
  sen_y = static_cast <double> (sen_y);
  cabeceo = static_cast <double> (cabeceo);
  giro = static_cast <double> (giro);
  
  if (ncam == 0) 
  {
  giro = static_cast <double> (giro);
 
  }
  
  if (ncam == 1) 
  {
  giro = static_cast <double> (giro) + 0.6928957;
  
  }
  
  kinematic2 = *(cv::Mat_<float>(3, 3) << cos(sen_y)*cos(cabeceo)*cos(giro) - (sin(sen_y)*(sin(cabeceo)*sin(sen_x)+(cos(sen_x)*cos(cabeceo)*sin(giro)))) , -sin(cabeceo)*cos(sen_x)+sin(sen_x)*cos(cabeceo)*sin(giro) , cos(cabeceo)*cos(giro)*sin(sen_y) + (cos(sen_y)*((sin(cabeceo)*sin(sen_x))+(cos(sen_x)*cos(cabeceo)*sin(giro)))),
 sin(cabeceo)*cos(giro)*cos(sen_y) + (sin(sen_y)*(cos(giro)*sin(sen_x)-(cos(sen_x)*sin(cabeceo)*sin(giro)))),cos(giro)*cos(sen_x)+(sin(sen_x)*sin(cabeceo)*sin(giro)), sin(sen_y)*sin(cabeceo)*cos(giro) - (cos(sen_y) * (cos(giro)*sin(sen_x) + (cos(sen_x)*sin(cabeceo)*sin(giro))) ) ,
 -sin(giro)*cos(sen_y) - (sin(sen_y)*cos(giro)*cos(sen_x)), cos(giro)*sin(sen_x) , -sin(giro)*sin(sen_y) + (cos(sen_y)*cos(giro)*cos(sen_x)) );
 
     cv::Mat cameraMatrix = *(cv::Mat_<float>(3, 3) <<  5.5555980089858122e+02 , 0., 3.1872821392192793e+02, 0.,
     					           5.5875606667787520e+02, 2.4699050318932325e+02, 0., 0., 1.);
 
 
 rot_camera2 = cameraMatrix * kinematic2;
 float v1 =   5.5875606667787520e+02;
 float v2 =   3.1872821392192793e+02;
 float v3 =  2.4699050318932325e+02;     
 double r311 = rot_camera2(2,0);
 double r321 = rot_camera2(2,1);
 double r331 = rot_camera2(2,2);
 ly1 = (v3*r331+r311*v1 + r321*v2)/r331;
 ly2 = (v3*r331+r311*v1 - r321*v2)/r331;
 if (ly1 < 0)
     ly1 = 1;
     
 if (ly1 > 480)
     ly1 = 480;
 
}

void interfaz2::num_scan(int m)
{
 n_scan = m;
}


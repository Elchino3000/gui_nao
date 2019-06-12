#ifndef INTERFAZ2_H
#define INTERFAZ2_H

#include <alcommon/albroker.h>
#include <QMainWindow>
#include "opencv2/opencv.hpp"

namespace Ui {
class interfaz2;
}

class interfaz2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit interfaz2(QWidget *parent = 0);
    ~interfaz2();
    int ncam;
    float vl,va,hu,hr;
    float yaw,pitch;
    std::string ipRobot;
    std::string camera;
    cv::Mat imgHeader;
    cv::Mat hsv;
    boost::shared_ptr<AL::ALBroker> broker;
    AL::ALValue results;

    cv::Mat g; //creacion del contenedor de la imagen resultante 
    cv::Mat res;
    float gr,grr,grb,gb,R,G,B,poin;
    int n_scan;
    std::vector<cv::Point> contours;
    int nl, nc;

    cv::Mat_<float> kinematic2;
    cv::Mat_<float> rot_camera2;
    cv::Mat_<float> cameraMatrix;
    float cabeceo;
    float giro;
    double sen_x; 
    double sen_y;
    double ly1;
    double ly2;

private slots:
    void on_conectar_clicked();
    void on_conectar_cam_clicked();
    void on_adelante_clicked();
    void on_home_clicked();
    void on_atras_clicked();
    void on_izquierda_clicked();
    void on_derecha_clicked();
    void on_detener_clicked();
    void moveyaw(int);
    void movepitch(int);
    void on_comboBox_activated(int index);
    void horizont_line();
    void frameadqui();
    void binari();
    void num_scan(int m);
private:
    Ui::interfaz2 *ui;
};

#endif // INTERFAZ2_H

/********************************************************************************
** Form generated from reading UI file 'interfaz2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZ2_H
#define UI_INTERFAZ2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interfaz2
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *conectar;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QPushButton *conectar_cam;
    QGroupBox *group_control;
    QGroupBox *groupBox_5;
    QPushButton *adelante;
    QPushButton *derecha;
    QPushButton *atras;
    QPushButton *izquierda;
    QPushButton *home;
    QPushButton *detener;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_24;
    QGroupBox *groupBox_6;
    QLabel *label_3;
    QSlider *hyaw;
    QLabel *label_4;
    QSlider *hpitch;
    QLabel *lyaw;
    QLabel *lpitch;
    QSlider *sscan;
    QLabel *lscan;
    QLabel *label_7;
    QLabel *binari;
    QLabel *label_2;
    QLabel *label;
    QLabel *camera;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *interfaz2)
    {
        if (interfaz2->objectName().isEmpty())
            interfaz2->setObjectName(QString::fromUtf8("interfaz2"));
        interfaz2->resize(1160, 857);
        centralWidget = new QWidget(interfaz2);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 420, 221, 141));
        conectar = new QPushButton(groupBox);
        conectar->setObjectName(QString::fromUtf8("conectar"));
        conectar->setGeometry(QRect(40, 70, 131, 61));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 40, 113, 27));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 580, 221, 171));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 40, 111, 27));
        conectar_cam = new QPushButton(groupBox_2);
        conectar_cam->setObjectName(QString::fromUtf8("conectar_cam"));
        conectar_cam->setGeometry(QRect(40, 80, 131, 61));
        group_control = new QGroupBox(centralWidget);
        group_control->setObjectName(QString::fromUtf8("group_control"));
        group_control->setGeometry(QRect(250, 410, 901, 361));
        groupBox_5 = new QGroupBox(group_control);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 30, 491, 381));
        adelante = new QPushButton(groupBox_5);
        adelante->setObjectName(QString::fromUtf8("adelante"));
        adelante->setGeometry(QRect(160, 40, 121, 61));
        derecha = new QPushButton(groupBox_5);
        derecha->setObjectName(QString::fromUtf8("derecha"));
        derecha->setGeometry(QRect(280, 100, 121, 61));
        atras = new QPushButton(groupBox_5);
        atras->setObjectName(QString::fromUtf8("atras"));
        atras->setGeometry(QRect(160, 160, 121, 61));
        izquierda = new QPushButton(groupBox_5);
        izquierda->setObjectName(QString::fromUtf8("izquierda"));
        izquierda->setGeometry(QRect(40, 100, 121, 61));
        home = new QPushButton(groupBox_5);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(160, 100, 121, 61));
        detener = new QPushButton(groupBox_5);
        detener->setObjectName(QString::fromUtf8("detener"));
        detener->setGeometry(QRect(10, 230, 121, 61));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 250, 121, 17));
        label_5->setFont(font);
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 280, 141, 17));
        label_12->setFont(font);
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(300, 250, 21, 17));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(310, 280, 21, 17));
        groupBox_6 = new QGroupBox(group_control);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(540, 50, 311, 141));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 40, 41, 17));
        hyaw = new QSlider(groupBox_6);
        hyaw->setObjectName(QString::fromUtf8("hyaw"));
        hyaw->setGeometry(QRect(69, 30, 191, 41));
        hyaw->setMinimum(-20);
        hyaw->setMaximum(20);
        hyaw->setSingleStep(1);
        hyaw->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 80, 51, 20));
        hpitch = new QSlider(groupBox_6);
        hpitch->setObjectName(QString::fromUtf8("hpitch"));
        hpitch->setGeometry(QRect(70, 70, 191, 41));
        hpitch->setMinimum(-5);
        hpitch->setMaximum(5);
        hpitch->setSingleStep(1);
        hpitch->setOrientation(Qt::Horizontal);
        lyaw = new QLabel(groupBox_6);
        lyaw->setObjectName(QString::fromUtf8("lyaw"));
        lyaw->setGeometry(QRect(270, 40, 31, 21));
        lpitch = new QLabel(groupBox_6);
        lpitch->setObjectName(QString::fromUtf8("lpitch"));
        lpitch->setGeometry(QRect(270, 80, 31, 21));
        sscan = new QSlider(group_control);
        sscan->setObjectName(QString::fromUtf8("sscan"));
        sscan->setGeometry(QRect(610, 230, 160, 29));
        sscan->setMinimum(3);
        sscan->setMaximum(100);
        sscan->setSliderPosition(10);
        sscan->setOrientation(Qt::Horizontal);
        lscan = new QLabel(group_control);
        lscan->setObjectName(QString::fromUtf8("lscan"));
        lscan->setGeometry(QRect(780, 230, 41, 31));
        label_7 = new QLabel(group_control);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 230, 51, 31));
        binari = new QLabel(centralWidget);
        binari->setObjectName(QString::fromUtf8("binari"));
        binari->setGeometry(QRect(149, 40, 411, 291));
        binari->setPixmap(QPixmap(QString::fromUtf8("/home/daniel/nao/workspace/interfaz2/build-local/sdk/bin/indice.png")));
        binari->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(800, 330, 111, 17));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 340, 151, 20));
        camera = new QLabel(centralWidget);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setGeometry(QRect(660, 30, 411, 291));
        camera->setCursor(QCursor(Qt::ArrowCursor));
        camera->setMouseTracking(true);
        camera->setAcceptDrops(true);
        camera->setPixmap(QPixmap(QString::fromUtf8("/home/daniel/nao/workspace/interfaz2/build-local/sdk/bin/indice.png")));
        camera->setScaledContents(true);
        interfaz2->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(interfaz2);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1160, 25));
        interfaz2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(interfaz2);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        interfaz2->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(interfaz2);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        interfaz2->setStatusBar(statusBar);

        retranslateUi(interfaz2);
        QObject::connect(hyaw, SIGNAL(sliderMoved(int)), lyaw, SLOT(setNum(int)));
        QObject::connect(hpitch, SIGNAL(sliderMoved(int)), lpitch, SLOT(setNum(int)));
        QObject::connect(sscan, SIGNAL(sliderMoved(int)), lscan, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(interfaz2);
    } // setupUi

    void retranslateUi(QMainWindow *interfaz2)
    {
        interfaz2->setWindowTitle(QApplication::translate("interfaz2", "Visualizacion del algoritmo de Segmentación y de Scan Lines. Ing. Daniel Silva", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("interfaz2", "        Inserte la Direccion ip:", 0, QApplication::UnicodeUTF8));
        conectar->setText(QApplication::translate("interfaz2", "Conectar", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("interfaz2", "10.42.0.11", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("interfaz2", "          Seleccione la Camara", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("interfaz2", "Camara Alta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("interfaz2", "Camara Baja", 0, QApplication::UnicodeUTF8)
        );
        conectar_cam->setText(QApplication::translate("interfaz2", "Abrir Camara", 0, QApplication::UnicodeUTF8));
        group_control->setTitle(QApplication::translate("interfaz2", "                                                                                                              Nao Control", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("interfaz2", "                                         Control de Locomocion", 0, QApplication::UnicodeUTF8));
        adelante->setText(QApplication::translate("interfaz2", "Adelante", 0, QApplication::UnicodeUTF8));
        derecha->setText(QApplication::translate("interfaz2", "Derecha", 0, QApplication::UnicodeUTF8));
        atras->setText(QApplication::translate("interfaz2", "Atras", 0, QApplication::UnicodeUTF8));
        izquierda->setText(QApplication::translate("interfaz2", "Izquierda", 0, QApplication::UnicodeUTF8));
        home->setText(QApplication::translate("interfaz2", "Home", 0, QApplication::UnicodeUTF8));
        detener->setText(QApplication::translate("interfaz2", "Detener", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("interfaz2", "Velocidad Lineal:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("interfaz2", "Velocidad Angular:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("interfaz2", "0", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("interfaz2", "0", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("interfaz2", "                         Control de la Cabeza", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("interfaz2", "YAW", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("interfaz2", "PITCH", 0, QApplication::UnicodeUTF8));
        lyaw->setText(QApplication::translate("interfaz2", "0", 0, QApplication::UnicodeUTF8));
        lpitch->setText(QApplication::translate("interfaz2", "0", 0, QApplication::UnicodeUTF8));
        lscan->setText(QApplication::translate("interfaz2", "10", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("interfaz2", "n\302\260 Scan ", 0, QApplication::UnicodeUTF8));
        binari->setText(QString());
        label_2->setText(QApplication::translate("interfaz2", "Imagen a Color", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("interfaz2", "Scan lines", 0, QApplication::UnicodeUTF8));
        camera->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class interfaz2: public Ui_interfaz2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZ2_H

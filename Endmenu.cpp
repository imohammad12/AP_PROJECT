#include"Endmenu.h"
#include <QGraphicsView>
#include<QPushButton>
#include"Gamecontroller.h"
#include<QDebug>
#include <QTimer>
#include <QGraphicsScene>

extern Gamecontroller * gamecontroller;

Endmenu::Endmenu(QObject *parent2) : QObject()
{
    scene= new QGraphicsScene;
    Eview->setScene(scene);// for view

    playagain = new QPushButton;
    QPixmap back(":/startmenu/cool-background.jpg");
    scene->setBackgroundBrush(back.scaled(500,300,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    playagain = new QPushButton(" Play again !");
    playagain->setGeometry(50,100,100,50);
    scene->addWidget(playagain);
    qDebug()<<"we resived the constructor of end menu";
    connect(playagain,SIGNAL(clicked(bool)),this,SLOT(pressedstart(bool)));//creating play obj ->change the slot
    //connect(playagain,SIGNAL(clicked(bool)),this,SLOT(close()));
    scene->setSceneRect(0,0,500,500);
    Eview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Eview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Eview->setFixedSize(500,500);
    Eview->show();

}

void Endmenu::pressedstart(bool)
{
    qDebug()<<"key of play again resived";
    gamecontroller->playagain();
}



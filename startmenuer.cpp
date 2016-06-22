#include "startmenuer.h"

#include<QDebug>
#include <QTimer>
#include <QGraphicsView>
#include <QGraphicsScene>

//extern Gamecontroller * gamecontroller;

StartMenueR::StartMenueR(QObject *parent) : QObject()
{

    scene= new QGraphicsScene;
    QGraphicsView *v = new QGraphicsView(scene);
    //setScene(scene);
    QPixmap back(":/startmenu/cool-background.jpg");
    scene->setBackgroundBrush(back.scaled(500,300,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    play = new QPushButton(" Let's Play ");
    play->setGeometry(50,100,100,50);
    scene->addWidget(play);
    play->setCheckable(true);
    connect(play,SIGNAL(clicked(bool)),this,SLOT(pressedstartkey(bool)));//creating play obj ->change the slot
    qDebug() << "got here";
    //connect(play,SIGNAL(clicked(bool)),this,SLOT(close()));
    scene->setSceneRect(0,0,400,500);
    v->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    v->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    v->setFixedSize(400,500);
    qDebug() << "got end";
    v->show();

}

void StartMenueR::pressedstartkey(bool)
{

   // gamecontroller->startgame();
   qDebug() <<"we resevied the pressedstartkey";

}

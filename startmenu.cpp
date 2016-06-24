#include "startmenu.h"
#include"Gamecontroller.h"
#include<QDebug>
#include <QTimer>
#include <QGraphicsView>
#include <QGraphicsScene>

extern Gamecontroller * gamecontroller;
extern Play *play;

StartMenu::StartMenu(QObject *parent) : QObject(parent)
{

    scene= new QGraphicsScene;
    view = new QGraphicsView;
    view->setScene(scene);
    QPixmap back(":/play/cool-background.jpg");
    scene->setBackgroundBrush(back.scaled(500,600,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    playbutton = new QPushButton(" Let's Play ");
    playbutton->setGeometry(50,100,100,50);
    scene->addWidget(playbutton);
    playbutton->setCheckable(true);
    connect(playbutton,SIGNAL(clicked(bool)),this,SLOT(pressedstartkey(bool)));//creating play obj ->change the slot
    scene->setSceneRect(0,0,500,600);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(500,600);
    view->show();

    score=new Score;
    score->showtopscore();
    scene->addItem(score);
}

void StartMenu::pressedstartkey(bool)
{

    gamecontroller->startgame();


}

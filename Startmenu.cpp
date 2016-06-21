#include"Startmenu.h"
#include"Gamecontroller.h"

Startmenu::Startmenu(QWidget *parent)
{
    scene= new QGraphicsScene;
    setScene(scene);
    QPixmap back(":/startmenu/cool-background.jpg");
    scene->setBackgroundBrush(back.scaled(500,300,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    play = new QPushButton(" Let's Play ");
    play->setGeometry(50,100,100,50);
    scene->addWidget(play);
    //connect(play,SIGNAL(clicked(bool)),this,SLOT(startgame()));//creating play obj ->change the slot
    connect(play,SIGNAL(clicked(bool)),this,SLOT(close()));
    scene->setSceneRect(0,0,400,500);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(400,500);
    show();
}


#include"Endmenu.h"

#include<QPushButton>

Endmenu::Endmenu(QWidget *parent)
{
    scene= new QGraphicsScene;
    setScene(scene);// for view

    playagain = new QPushButton;
    QPixmap back(":/play/cool-background.jpg");
    scene->setBackgroundBrush(back.scaled(500,600,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    playagain = new QPushButton(" Play again !");
    playagain->setGeometry(50,100,100,50);
    scene->addWidget(playagain);
    //connect(playagain,SIGNAL(clicked(bool)),this,SLOT(startgame()));//creating play obj ->change the slot
    connect(playagain,SIGNAL(clicked(bool)),this,SLOT(close()));
    scene->setSceneRect(0,0,500,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(500,600);
    show();

    score=new Score;
    score->showtopscore();
    scene->addItem(score);

}



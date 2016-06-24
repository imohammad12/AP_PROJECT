#include"Play.h"
#include"Mediumwall.h"

extern Gamecontroller * gamecontroller;

Play::Play(QWidget *parent)
{
    scene=new QGraphicsScene;
    setScene(scene);
    QPixmap back(":/play/background.jpg");
    scene->setBackgroundBrush(back.scaled(500,600,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    scene->setSceneRect(0,0,500,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(500,600);
    show();

    ball=new Ball;
    scene->addItem(ball);

    Whiteblock * white=new Whiteblock;
    scene->addItem(white);

    score=new Score;
    scene->addItem(score);

}


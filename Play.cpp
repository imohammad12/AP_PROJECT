#include"Play.h"

Play::Play(QWidget *parent)
{
    scene=new QGraphicsScene;
    setScene(scene);
    QPixmap back(":/startmenu/cool-background.jpg");
    scene->setBackgroundBrush(back.scaled(500,300,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    scene->setSceneRect(0,0,400,500);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(400,500);
    show();

    ball=new Ball;
    scene->addItem(ball);
}

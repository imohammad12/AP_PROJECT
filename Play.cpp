#include"Play.h"
#include"Mediumwall.h"

Play::Play(QWidget *parent)
{
    scene=new QGraphicsScene;
    setScene(scene);
    QPixmap back(":/startmenu/recycled_texture_background_by_sandeep_m-d6aeau9_PZ9chud.jpg");
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

}


#include "ball.h"

Ball::Ball()
{

    setPixmap(QPixmap(":/play/o_854cf0b2dc35f874-0.jpg"));
    setPos(200,400);
    setScale(.6);
    //setTransformOriginPoint(15,15);
  //  timer->start(10);
   // connect(timer,SIGNAL(timeout()),this,SLOT(rotate()));

}


void Ball::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{


    if(event->buttons() == Qt::LeftButton)
    {

        this->moveBy(event->pos().x() - offset.x(),event->pos().y() - offset.y());
    }
}

void Ball::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    offset.setX(event->pos().x());
    offset.setY(event->pos().y());
}
void Ball::changesize()
{
    setScale(1.3);
}
void Ball::changepic()
{
    setPixmap(QPixmap(":/play/forcahngepic.png"));
}

void Ball::rotate()
{
    setRotation(x);
    x++;
}

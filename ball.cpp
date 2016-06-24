#include "ball.h"

Ball::Ball()
{

    setPixmap(QPixmap(":/play/o_854cf0b2dc35f874-0.jpg"));
    setPos(150,300);

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

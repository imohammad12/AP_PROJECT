#ifndef BALL_H
#define BALL_H

#include<QPoint>
#include<QGraphicsSceneMouseEvent>
#include<QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class Ball:public QGraphicsPixmapItem
{
public:
    Ball();
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);

private:
    QPoint offset;
};

#endif // BALL_H

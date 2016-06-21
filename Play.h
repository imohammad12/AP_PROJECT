#ifndef PLAY_H
#define PLAY_H

#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include<QGraphicsEllipseItem>
#include<QPoint>
#include<QGraphicsSceneMouseEvent>
#include<QGraphicsPixmapItem>
#include"ball.h"

class Play: public QGraphicsView
{

public:
    Play(QWidget * parent=0);


private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
    Ball *ball;



};

#endif // PLAY_H

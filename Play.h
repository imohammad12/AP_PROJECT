#ifndef PLAY_H
#define PLAY_H
#include"Mediumwall.h"

#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include<QGraphicsEllipseItem>
#include<QPoint>
#include<QGraphicsSceneMouseEvent>
#include<QGraphicsPixmapItem>
#include"ball.h"
#include"whiteblock.h"
#include"Gamecontroller.h"
#include"score.h"

class Play: public QGraphicsView
{

public:
    Play(QWidget * parent=0);
    Ball *ball;
    Score *score;

private:
    //QGraphicsView * view;
    QGraphicsScene * scene;

    //Mediumwall *mediunmwall1;
    //Mediumwall *mediunmwall2;
    //Mediumwall *mediunmwall3;
    //Whiteblock *white;


};

#endif // PLAY_H

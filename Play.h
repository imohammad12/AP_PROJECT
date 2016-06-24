#ifndef PLAY_H
#define PLAY_H

#include"Mediumwall.h"
#include "Easywall.h"
#include"ball.h"

#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<QTimer>
#include <QObject>

class Play:public QObject
{
    Q_OBJECT
public:
    Play(QObject *parent=0);
    //QGraphicsView * view;
    QGraphicsScene * scene;
    Ball *ball;
    Mediumwall *mediunmwall1;

    Easywall * easywall1;
    int wall_num=1;

    QTimer * timer2 = new QTimer();
    QGraphicsView *Pview = new QGraphicsView();
public slots:
    void makewall();

};

#endif // PLAY_H

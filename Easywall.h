#ifndef EASYWALL_H
#define EASYWALL_H
#include "Walls.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
class Easywall: public QGraphicsPixmapItem, public Walls {
public:
    Easywall(int wallnum,QGraphicsItem * parent=0);
    int whichwall;
    QTimer * timer5 = new QTimer();


public slots:
    void move();

};

#endif // EASYWALL_H

#ifndef MEDIUMWALL_H
#define MEDIUMWALL_H
#include "Walls.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
class Mediumwall: public QGraphicsPixmapItem, public Walls {
public:
    Mediumwall(int wallnum,QGraphicsItem * parent=0);
    int whichwall;
    QTimer * timer5 = new QTimer();


public slots:
    void move();

};

#endif // MEDIUMWALL_H

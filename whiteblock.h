#ifndef WHITEBLOCK_H
#define WHITEBLOCK_H
#include<QObject>
#include<QTimer>
#include<QGraphicsPixmapItem>
#include<QList>
#include<typeinfo>
#include"ball.h"
#include"Play.h"
#include<QTime>

class Whiteblock: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Whiteblock();
    int gettype();

private:
    int type;

public slots:
    void move();
};

#endif // WHITEBLOCK_H

#include"Mediumwall.h"
#include "ball.h"
#include "Play.h"
#include <QList>
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include<typeinfo>
#include <QDebug>
#include"Gamecontroller.h"

extern  Play * play;
extern Gamecontroller * gamecontroller;

Mediumwall::Mediumwall(int wallnum,QGraphicsItem *parent):  QGraphicsPixmapItem(parent){



    timer5->start(13);
//    if (wallnum==1){
//        setPixmap(QPixmap(":/play/wall(2).png"));
//    }
    if (wallnum==2){
        setPixmap(QPixmap(":/play/wall(7).png"));
    }
//    if (wallnum==3){
//        setPixmap(QPixmap(""));
//    }
    connect(timer5,SIGNAL(timeout()),this,SLOT(move()));


}




void Mediumwall::move()
{
    setPos(x(),y()+1);
    int i;
    int n;
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for ( i = 0, n = colliding_items.size(); i < n; ++i){
            if (typeid(*(colliding_items[i])) == typeid(Ball)){
                qDebug() <<" we resived colliding item";
                disconnect(timer5,SIGNAL(timeout()),this,SLOT(move()));
                gamecontroller->endgame();
                //gamecontroller
              // scene()->removeItem(colliding_items[i]);
              delete colliding_items[i];
                delete this;
                return;
            }

    }
    if ((pos().y())>600){
        qDebug()<<"deleted wall";
        delete this;

    }

}

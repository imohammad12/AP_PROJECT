#include "Easywall.h"
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

Easywall::Easywall(int wallnum,QGraphicsItem *parent):  QGraphicsPixmapItem(parent){



    timer5->start(13);
    if (wallnum==0||wallnum==3||wallnum==4){
        setPixmap(QPixmap(":/play/wall(9).png"));
    }
    if (wallnum==1||wallnum==2||wallnum==8){
       setPixmap(QPixmap(":/play/wall(10).png"));
   }
    if (wallnum==5||wallnum==6||wallnum==7){
        setPixmap(QPixmap(":/play/wall(13).png"));
    }
    connect(timer5,SIGNAL(timeout()),this,SLOT(move()));


}




void Easywall::move()
{
    setPos(x(),y()+1);
    int i;
    int n;
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for ( i = 0, n = colliding_items.size(); i < n; ++i){
            if (typeid(*(colliding_items[i])) == typeid(Ball)){
                qDebug() <<" we resived colliding item";
                disconnect(timer5,SIGNAL(timeout()),this,SLOT(move()));
                gamecontroller->endgameeasy();
                //gamecontroller
              // scene()->removeItem(colliding_items[i]);
              delete colliding_items[i];
                delete this;
                return;
            }

    }
    if ((pos().y())>500){
        qDebug()<<"deleted wall";
        delete this;

    }

}

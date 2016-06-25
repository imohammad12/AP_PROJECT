//#include"whiteblock.h"
//#include<QDebug>

//extern Play *play;

//Whiteblock::Whiteblock(QObject *parent):  QObject(parent)
//{
//    setPixmap(QPixmap(":/play/whiteblock-50px.png"));
//    QTime time=QTime::currentTime();
//    qsrand((uint)time.msec());
//    int x=qrand()%100;
//    int y =qrand() %50;
//    setPos(x+100,y+100);
//    QTimer *timer=new QTimer;
//    timer->start(30);
//    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
//    type=0;
//    setScale(.8);


//}

//int Whiteblock::gettype()
//{
//    return type;
//}


//void Whiteblock::move()
//{
//    setPos(x()+2,y()+2);

//    QList<QGraphicsItem *> colliding_items = collidingItems();
//       for(int i=0 , n=colliding_items.size() ; i< n ; i++)
//       {
//           if(typeid(*(colliding_items[i])) == typeid(Ball))
//           {
//               QTime time=QTime::currentTime();
//               qsrand((uint)time.msec());
//                type= qrand()%3;

//                qDebug()<<type;
//                if(type == 2)
//                    play->ball->changesize();
//                if(type == 1)
//                    //score
//                    exit(0);
//                if(type==0)
//                    play->ball->changepic();

//                scene()->removeItem(this);
//                delete this;
//                return;

//           }
//       }

//       if( y() > 400)
//       {
//           scene()->removeItem(this);
//           delete this;
//           return;
//       }
//       if( x() > 400 )
//       {
//           scene()->removeItem(this);
//           delete this;
//       }

//}

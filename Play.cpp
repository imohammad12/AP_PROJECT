#include"Play.h"

Play::Play(QObject *parent) : QObject(parent)
{
    scene=new QGraphicsScene;
    Pview->setScene(scene);
    QPixmap back(":/play/background2.jpg");
    scene->setBackgroundBrush(back.scaled(500,300,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    scene->setSceneRect(0,0,500,500);
    Pview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Pview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Pview->setFixedSize(500,500);
    Pview->show();

    ball=new Ball;
    scene->addItem(ball);
    int randnum =rand()%6;
    easywall1 = new Easywall(1);// need change
    scene->addItem(easywall1);
    easywall1->setPos(0,-500);// in it's constructor



//    mediunmwall1 = new Mediumwall(2);// need change
//    scene->addItem(mediunmwall1);
//    mediunmwall1->setPos(0,-500);
    timer2->start(10000);
//    connect(timer2,SIGNAL(timeout()),this,SLOT(makewall()));

//    mediunmwall1->setPos(0,-1100);
//    mediunmwall2 = new Mediumwall(2);
//    scene->addItem(mediunmwall2);
//   // setTransformOriginPoint(50,50);
//    mediunmwall2->setPos(0,-500);
// //   mediunmwall3 = new Mediumwall(3);

}

void Play::makewall()
{
    int random_number_med = rand() % 6;
    int random_number_eas = rand() % 6;

    if(wall_num%2==1){

        mediunmwall1 = new Mediumwall(2); // need change
        scene->addItem(mediunmwall1);
        mediunmwall1->setPos(0,-1100);
    }
    if(wall_num%2==0){

        easywall1 = new Easywall(1); // need change
        scene->addItem(easywall1);
        easywall1->setPos(0,-1100);
    }
    wall_num++;
}

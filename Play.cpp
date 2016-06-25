#include"Play.h"

Play::Play(QObject *parent) : QObject(parent)
{
    scene=new QGraphicsScene;
    Pview->setScene(scene);
    QPixmap back(":/play/Floral-Background.jpg");
    scene->setBackgroundBrush(back.scaled(500,500,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    scene->setSceneRect(0,0,500,500);
    Pview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Pview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Pview->setFixedSize(500,500);
    Pview->show();



    score=new Score;
    //score->setZValue(1);
    scene->addItem(score);

    ball=new Ball;
    scene->addItem(ball);
   // ball->setFlag(QGraphicsItem::ItemIsMovable);

    int randnum =rand()%9;
    easywall1 = new Easywall(randnum);// need change
    scene->addItem(easywall1);
    easywall1->setPos(0,-700);// in it's constructor

    //scene->addItem(score);


//    mediunmwall1 = new Mediumwall(2);// need change
//    scene->addItem(mediunmwall1);
//    mediunmwall1->setPos(0,-500);
    timer2->start(8120);
    connect(timer2,SIGNAL(timeout()),this,SLOT(makewall()));

//    mediunmwall1->setPos(0,-1100);
//    mediunmwall2 = new Mediumwall(2);
//    scene->addItem(mediunmwall2);
//   // setTransformOriginPoint(50,50);
//    mediunmwall2->setPos(0,-500);
// //   mediunmwall3 = new Mediumwall(3);

}

void Play::makewall()
{

    score->increase();
    int random_number_med = rand() % 9;
    int random_number_eas = rand() % 9;
    if(wall_num<4){
        if(wall_num%2==1){

            mediunmwall1 = new Mediumwall(random_number_med); // need change
            scene->addItem(mediunmwall1);
            mediunmwall1->setPos(0,-700);

        }
        if(wall_num%2==0){

            easywall1 = new Easywall(random_number_eas); // need change
            scene->addItem(easywall1);
            easywall1->setPos(0,-700);

        }
    }
    if(wall_num==4){

        mediunmwall2 = new Mediumwall(9);
        scene->addItem(mediunmwall2);
        mediunmwall2->setPos(0,-700);
        whiteblock = new Whiteblock2;
        scene->addItem(whiteblock);
        whiteblock->setPos(0,-450);

    }
    if(wall_num>4){
        if(wall_num%2==1){

            mediunmwall1 = new Mediumwall(random_number_med); // need change
            scene->addItem(mediunmwall1);
            mediunmwall1->setPos(0,-700);
        }
        if(wall_num%2==0){

            easywall1 = new Easywall(random_number_eas); // need change
            scene->addItem(easywall1);
            easywall1->setPos(0,-700);
        }

    }

    wall_num++;

}

#include "score.h"
#include<QTimer>

Score::Score(QGraphicsItem * item): QGraphicsTextItem(item)
{
    //scr=gethighscore();
   // if(scr>5000)

    scr=0;
    setPos(10,20);
    setPlainText(QString("Score : " + QString::number(scr)));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));

    //QTimer *timer=new QTimer;
    //timer->start(100);
    //connect(timer,SIGNAL(timeout()),this,SLOT(increase()));
}

void Score::showtopscore()
{
    label = new QLabel("  High Score : " + QString::number(gethighscore()));
    label->setGeometry(100,200,300,50);
    label->setFont(QFont("lucida",15,QFont::Bold,true));
    label->setAttribute(Qt::WA_TranslucentBackground);
    //play->scene->addWidget(label);
    //setPos(100,200);
    //setPlainText(QString("High Score : " + QString::number(gethighscore())));
}

void Score::increase()
{
    qDebug()<<"increase score";
    scr+=2;
    setPlainText(QString("score : ")+ QString::number(scr));
}

void Score::showscore(int s)
{
    qDebug()<<"showscore func"<<s;
    setPos(100,300);
    setPlainText(QString(" Your Score : " + QString::number(s)));
}

int Score::gethighscore()
{
    QFile f(":/play/score.txt");
    if(f.open(QFile::ReadOnly | QFile::Text) == false)
    {
        qDebug()<<"File not open";
        return 0;

    }

            QTextStream in(&f);
            QString read= in.readLine();
            f.close();
            if(read.toInt()>5000)
            {
                return 0;
                qDebug()<<"File not open";
            }
            else
                return read.toInt();

            //QString read= in.readLine();
            //if(read.toInt()> top)
            // top=read.toInt();




}

int Score::returnscr()
{
    qDebug()<<"returnscr"<<scr;
    savehighscore();
    return scr;
}

void Score::savehighscore()
{

    int top = gethighscore();
    qDebug()<<"savescr"<<scr<<top;
    if(scr > top )
        top=scr;

    QFile f(":/play/score.txt");
    if(f.isOpen())
    {
        f.close();
    }
    if(f.open(QFile::WriteOnly | QFile::Text) == false)
    {

        qDebug()<<"File not open";
        return;
    }


       QTextStream out(&f);
       out<<top;
       qDebug()<<top;
       f.close();


}

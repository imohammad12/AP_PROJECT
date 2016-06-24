#include "score.h"

Score::Score(QGraphicsItem * item): QGraphicsTextItem(item)
{
    //scr=gethighscore();
   // if(scr>5000)

    scr=0;
    setPos(10,20);
    setPlainText(QString("Score : " + QString::number(scr)));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));

}

void Score::showtopscore()
{
    setPos(100,200);
    setPlainText(QString("High Score : " + QString::number(gethighscore())));
}

void Score::increase()
{
    scr+=1;
    //setPlainText(QString("score : ")+ QString::number(sc));
}

int Score::gethighscore()
{

    QFile f(":/play/score.txt");
    if(f.open(QFile::ReadOnly | QFile::Text) == false)
    {
        return 2;
    }
    else
    {
            QTextStream in(&f);
            QString read= in.readLine();
            f.close();
            if(read.toInt()>5000)
                return 1;
            else
                return read.toInt();

            //QString read= in.readLine();
            //if(read.toInt()> top)
            // top=read.toInt();

    }


}

void Score::savehighscore()
{
    int top = gethighscore();

    if(scr > top )
        top=scr;
    QFile f(":/play/score.txt");
    if(f.open(QFile::WriteOnly | QFile::Text) == false)
    {

    }
    else
    {
        QTextStream out(&f);
        out<<top;
        f.close();
    }

}

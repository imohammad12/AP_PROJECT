#ifndef SCORE_H
#define SCORE_H
#include<QGraphicsTextItem>
#include<QFont>
#include<QFile>
#include<QString>
#include<QTextStream>
#include<QDebug>
#include<QLabel>
#include<QFont>

class Score : public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *item =0);
    void showtopscore();
   // void increase();
    void showscore(int);
    int gethighscore();
    //int getscr;
     QLabel *label;
     int returnscr();
    void savehighscore();
private:
    int scr;

public slots:
    void increase();
};

#endif // SCORE_H

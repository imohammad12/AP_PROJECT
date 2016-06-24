#ifndef SCORE_H
#define SCORE_H
#include<QGraphicsTextItem>
#include<QFont>
#include<QFile>
#include<QString>
#include<QTextStream>

class Score : public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *item =0);
    void showtopscore();
    void increase();
    //int getscr;

private:
    int gethighscore();
    void savehighscore();

    int scr;
};

#endif // SCORE_H

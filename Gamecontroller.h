#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<QTimer>
#include<QGraphicsView>
#include"Endmenu.h"
#include"Play.h"
#include "startmenuer.h"
#include <QMediaPlayer>



class Gamecontroller : public QObject
{
    Q_OBJECT
public:
    Gamecontroller ();


    void startgame();
    void endgamemedium();
    void endgameeasy();
    void playagain();
    QMediaPlayer * gameover;
    //void newgame();
//    QTimer * timer;
//     Endmenu *end;
//     Startmenu *start;
//     Play *play;
public slots:

     //->using in startmenu connect ??

};

#endif // GAMECONTROLLER_H

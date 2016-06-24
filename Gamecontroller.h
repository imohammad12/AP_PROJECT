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



class Gamecontroller : public QObject
{
    Q_OBJECT
public:
    Gamecontroller ();


    void startgame();
    void endgame();
    void playagain();

    //void newgame();
//    QTimer * timer;
//     Endmenu *end;
//     Startmenu *start;
//     Play *play;
public slots:

     //->using in startmenu connect ??

};

#endif // GAMECONTROLLER_H

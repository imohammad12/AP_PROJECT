#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<QTimer>
#include<QGraphicsView>
#include"Endmenu.h"
#include"Play.h"



class Gamecontroller : public QObject
{
    Q_OBJECT
public:
    Gamecontroller ();
    //void newgame();

private:

//    QTimer * timer;
//     Endmenu *end;
//     Startmenu *start;
//     Play *play;

public slots:
//   void check();
    void startgame(); //->using in startmenu connect ??

};

#endif // GAMECONTROLLER_H

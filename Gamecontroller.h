#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<QTimer>
#include<QGraphicsView>
#include"Endmenu.h"
#include"Startmenu.h"
#include"Play.h"

class Cheker:public QObject
{
    Q_OBJECT
public:
    Cheker ();
    //void newgame();

private:
     QTimer * timer;
     Endmenu *end;
     Startmenu *start;
     Play *play;

public slots:
    void check();
    //void newgame(); //->using in startmenu connect ??

};

#endif // GAMECONTROLLER_H

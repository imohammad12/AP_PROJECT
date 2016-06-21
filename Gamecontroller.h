#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<QTimer>
#include<QGraphicsView>

class Cheker:public QObject{
    Q_OBJECT
public:
    Cheker ();
    QTimer * timer3 = new QTimer(this);
    void newgame();
public slots:
    void chek();

};

#endif // GAMECONTROLLER_H

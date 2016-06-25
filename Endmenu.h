#ifndef ENDMENU_H
#define ENDMENU_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include<QPushButton>
#include<QObject>
#include"score.h"

class Endmenu: public QObject{
    Q_OBJECT
public:
    Endmenu(QObject *parent2=0);
    QGraphicsView *Eview = new QGraphicsView();
    Score *score;

private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
    QPushButton *playagain;


public slots:
    void pressedstart(bool);
};

#endif // ENDMENU_H

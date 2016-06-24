#ifndef ENDMENU_H
#define ENDMENU_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include<QPushButton>
#include<QObject>

class Endmenu: public QObject{
    Q_OBJECT
public:
    Endmenu(QObject *parent2=0);
    QGraphicsView *Eview = new QGraphicsView();

private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
     QPushButton *playagain;

public slots:
    void pressedstart(bool);
};

#endif // ENDMENU_H

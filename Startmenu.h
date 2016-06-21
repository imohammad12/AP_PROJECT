#ifndef STARTMENU_H
#define STARTMENU_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>


class Startmenu: public QGraphicsView{
public:
    Startmenu(QWidget * parent=0);

    QGraphicsScene * scene;


};

#endif // STARTMENU_H

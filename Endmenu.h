#ifndef ENDMENU_H
#define ENDMENU_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>


class Endmenu: public QGraphicsView{
public:
    Endmenu(QWidget * parent=0);

    QGraphicsScene * scene;


};

#endif // ENDMENU_H

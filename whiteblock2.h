#ifndef WHITEBLOCK2_H
#define WHITEBLOCK2_H
#include<QObject>
#include<QGraphicsPixmapItem>

class Whiteblock2 : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Whiteblock2();
    int gettype();

private:
    int type;

public slots:
    void move();
};

#endif // WHITEBLOCK2_H

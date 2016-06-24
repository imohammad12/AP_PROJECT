#ifndef WALLS_H
#define WALLS_H
#include<QObject>



class Walls :public QObject
{
    Q_OBJECT

public:
    Walls();
public slots:
    virtual void move()=0;

};

#endif // WALLS_H

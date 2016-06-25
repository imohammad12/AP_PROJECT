#include <QApplication>

#include "Gamecontroller.h"

Gamecontroller * gamecontroller;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gamecontroller= new Gamecontroller;

    return a.exec();
}

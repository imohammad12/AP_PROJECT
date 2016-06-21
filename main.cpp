#include <QApplication>
#include"Startmenu.h"
#include"Endmenu.h"
#include"Play.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Startmenu * start=new Startmenu;
    //Endmenu * end=new Endmenu;
    Play *play=new Play;
    
    return a.exec();
}

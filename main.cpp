#include "loginmain.h"
#include "diaoglist.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    LoginMain w;
//    w.show();

    DiaogList list;
    list.show();

    return a.exec();
}

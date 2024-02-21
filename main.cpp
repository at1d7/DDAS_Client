#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    MainWindow w;

    l.show();
    // w.show();

    return a.exec();
}

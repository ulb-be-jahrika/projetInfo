#include "mainwindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game game("C:/projet/mapTest.txt");
    MainWindow w("C:/projet/mapTest.txt", 55);
    w.show();
    return a.exec();
}

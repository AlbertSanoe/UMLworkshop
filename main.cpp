#include "MainWindow.h"

#include <QApplication>
#include <QPushButton>

#include<iostream>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

    std::cout << "����С";
}

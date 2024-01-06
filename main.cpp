//
// Created by walki on 2024/1/7.
//
#include <QApplication>

#include "mainwindow.h"

int main(int argc, char* argv[]) {
    QApplication application(argc, argv);
    MainWindow main_window;
    main_window.show();
    QApplication::exec();
}

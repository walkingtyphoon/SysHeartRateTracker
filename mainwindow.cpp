//
// Created by walki on 2024/1/7.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"

#include <qguiapplication.h>

#include "ui_MainWindow.h"
#include <QScreen>
#include <QPointer>


MainWindow::MainWindow(QWidget* parent) :
    QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    initWidgetSize();
    initStartLocation();
    initApplicationTitle();
}

MainWindow::~MainWindow() {
    delete ui;
}

[[nodiscard]] QSize MainWindow::getScreenSize() {
    QPointer screen = QGuiApplication::primaryScreen();
    return screen->size();
}


void MainWindow::initWidgetSize() {
    const QSize size = reSize(0.35, 0.3);
    const int newWidth = size.width();
    const int newHeight = size.height();
    this->setFixedSize(newWidth, newHeight);
}

void MainWindow::initStartLocation() {
    const QSize size = reSize(0.62, 0.05);
    const int newWidth = size.width();
    const int newHeight = size.height();
    this->move(newWidth, newHeight);
}

[[nodiscard]] QSize MainWindow::reSize(const double& widthScalingRatio, const double& heightScalingRatio) {
    const QSize size = getScreenSize();
    const int originWidth{size.width()};
    const int originHeight{size.height()};
    const int newWidth = qRound(originWidth * widthScalingRatio);
    const int newHeight = qRound(originHeight * heightScalingRatio);
    return {newWidth, newHeight};
}

void MainWindow::initApplicationTitle() {
    this->setWindowTitle("SysHeartRateTracker");
}

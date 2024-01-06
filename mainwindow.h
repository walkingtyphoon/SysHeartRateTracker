//
// Created by walki on 2024/1/7.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE

namespace Ui{
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QWidget{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow* ui;
    [[nodiscard]] static QSize getScreenSize();
    void initWidgetSize();
    void initStartLocation();
    [[nodiscard]] static QSize reSize(const double& widthScalingRatio, const double& heightScalingRatio);
    void initApplicationTitle();
};


#endif //MAINWINDOW_H

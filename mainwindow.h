#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "viewer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:

    void onLoginClick();

    void onClearClick();

    void onModelerClick();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    viewer *view;
};
#endif // MAINWINDOW_H

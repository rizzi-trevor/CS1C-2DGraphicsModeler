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

    //! login to the program
    void onLoginClick();

    //! clear the logintext
    void onClearClick();

    //! use the program as a guest
    void onModelerClick();

public:
    //! construct login window
    MainWindow(QWidget *parent = nullptr);

    //! destruct login window
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    viewer *view;
};
#endif // MAINWINDOW_H

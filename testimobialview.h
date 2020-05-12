#ifndef TESTIMOBIALVIEW_H
#define TESTIMOBIALVIEW_H

#include <QDialog>
#include <iostream>
#include <fstream>
using namespace std;

namespace Ui {
class testimobialView;
}

class testimobialView : public QDialog
{
    Q_OBJECT

public:
    explicit testimobialView(QWidget *parent = nullptr);
    ~testimobialView();

public slots:
    void onCloseClick();

private:
    Ui::testimobialView *ui;
};

#endif // TESTIMOBIALVIEW_H

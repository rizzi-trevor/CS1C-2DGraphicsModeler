#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>
#include "renderarea.h"
#include "circle.h"

namespace Ui {
class viewer;
}

class viewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewer(QWidget *parent = nullptr);
    ~viewer();

public slots:

    void onAddLine();

    void onAddPolyline();

    void onAddPolygon();

    void onAddRectangle();

    void onAddSquare();

    void onAddEllipse();

    void onAddCircle();

    void onAddText();


private:
    Ui::viewer *ui;
};

#endif // VIEWER_H

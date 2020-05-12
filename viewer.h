#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <fstream>
#include "renderarea.h"
#include "circle.h"
#include "serializer.h"
#include "contactpage.h"
#include "testimobialview.h"

namespace Ui {
class viewer;
}

class viewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewer(QWidget *parent = nullptr);

    viewer(QWidget *parent, bool admin);
    ~viewer();

    void displayVector();

    void updateScreen();

    void removeShape();

public slots:

    void onAddLine();

    void onAddPolyline();

    void onAddPolygone();

    void onAddRectangle();

    void onAddSquare();

    void onAddEllipse();

    void onAddCircle();

    void onAddText();

    void onLogout();

    void onRemoveClick();

    void onEditClick();

    void onContactClick();

    void onTestimonialClick();


private:
    Ui::viewer *ui;

    contactPage *contact;
    testimobialView *testimony;

};

#endif // VIEWER_H

#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QTableWidget>
#include "renderarea.h"
#include "circle.h"

namespace Ui {
class viewer;
}

class viewer : public QMainWindow
{
    Q_OBJECT

public:
    //! Constructs Shape viewer
    explicit viewer(QWidget *parent = nullptr);

    //! Constructs Shape viewer
    viewer(QWidget *parent, bool admin);
    
    //! Deconstructs Shape Viewer
    ~viewer();

    //! Displays the shapes
    void displayVector();

    //! Updates Screen
    void updateScreen();

    //! Removes a shape
    void removeShape();

public slots:

    //! Adds a line
    void onAddLine();

    //! Adds a polyline
    void onAddPolyline();

    //! Adds a polygon
    void onAddPolygon();

    //! Adds a rectangle
    void onAddRectangle();

    //! Adds a square
    void onAddSquare();

    //! Adds an ellipse
    void onAddEllipse();

    //! Adds a circle
    void onAddCircle();

    //! Adds text
    void onAddText();

    //! Logs out of shape viewer and returns to main window
    void onLogout();

    //! Removes a shape
    void onRemoveClick();

    //! Edits an existing shape
    void onEditClick();


private:
    Ui::viewer *ui;

};

#endif // VIEWER_H

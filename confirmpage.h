#ifndef CONFIRMPAGE_H
#define CONFIRMPAGE_H

#include <QDialog>
#include "QDebug"

#include "fileparser.h"

namespace shapeID
{
    extern int I_D;
}

/**
 * @file
 */


/**
 * \class confirmPage
 *
 * \brief class sets breifs user on confirmation on trip planning actions
 *
 *
 */

namespace Ui {
class confirmpage;
}

class confirmpage : public QDialog
{
    Q_OBJECT
public:

    explicit confirmpage(QWidget *parent = nullptr);

    ~confirmpage();

    confirmpage(QWidget *parent, bool &returnAnswer);
    bool getData();

    Line *myLine;
    Polyline *myPolyline;
    Polygon *myPolygon;
    Rectangle *myRectangle;
    Square *mySquare;
    Circle *myCircle;
    Ellipse *myEllipse;


private slots:
    void onCancelClick();

    void onConfirmClick();

    void onAddClick();

private:

    int maxPoints;
    int pointCount;
    int width;

    Ui::confirmpage *ui;

    bool answer = false;

    vector<QPoint> points;

    string color, style, cap, join, brushStyle, brushColor;

    QColor qtColor, qtBColor;
    PenStyle qtStyle;
    PenCapStyle qtCap;
    PenJoinStyle qtJoin;
    BrushStyle qtBrush;
};


/*/////////////////////

{
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    return check;
}

*///////////////////////
#endif // CONFIRMPAGE_H

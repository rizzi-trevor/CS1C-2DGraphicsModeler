#ifndef CONFIRMPAGE_H
#define CONFIRMPAGE_H

#include <QDialog>
#include "QDebug"

#include "fileparser.h"

namespace shapeID
{
    extern int I_D;
}

namespace properID
{
    extern int UNIQUE_ID;
}

namespace Ui {
class confirmpage;
}

class confirmpage : public QDialog
{
    Q_OBJECT
public:

    //! confirmpage explicit constructor
    explicit confirmpage(QWidget *parent = nullptr);

    //! confirmpage destrcutor
    ~confirmpage();

    //! confirmpage constructor to confirm adding shapes
    confirmpage(QWidget *parent, bool &returnAnswer);

    //! gets data from confirm page
    bool getData();

    Line *myLine;
    Polyline *myPolyline;
    Polygon *myPolygon;
    Rectangle *myRectangle;
    Square *mySquare;
    Circle *myCircle;
    Ellipse *myEllipse;
    Text *myText;


private slots:

    //! Cancels the add shape
    void onCancelClick();

    //! confirms addition of a shape
    void onConfirmClick();


    //! confirms addition of points to a shape
    void onAddClick();

private:

    int maxPoints;  ///< maximum amount of points allowed for a given shape
    int pointCount; ///< Number of points already consumed
    int width;      ///< width

    Ui::confirmpage *ui;

    bool answer = false; ///< cancel button returns false

    vector<QPoint> points; ///< stores shape points

    string color, style, cap, join, brushStyle, brushColor;

    QColor qtColor, qtBColor;
    PenStyle qtStyle;
    PenCapStyle qtCap;
    PenJoinStyle qtJoin;
    BrushStyle qtBrush;
};


#endif // CONFIRMPAGE_H

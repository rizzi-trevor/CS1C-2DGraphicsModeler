#ifndef SHAPE_H
#define SHAPE_H

#include <QBrush>
#include <QPainter>
#include <QPen>
#include <QPoint>
#include <QFont>
#include "math.h"

using namespace Qt;
using namespace std;

class Shape
{
public:

    //! Shape constructor
    Shape();

    //! shape paramaterized constructor
    Shape(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id);

    //virtual ~Shape();

    //! get shapes ID
    int getShapeID(){return shapeID;};

    //! get pens width
    void setPenWidth(int width);

    //! set color of a pen
    void setPenColor(const QColor &color);

    //! set pen style
    void setPenStyle(const PenStyle &style);

    //! set pen cap style
    void setPenCapStyle(const PenCapStyle &style);

    //! set pen join style
    void setPenJoinStyle(const PenJoinStyle &style);

    //! set brush color
    void setBrushColor(const QColor &color);

    //! set brush style
    void setBrushStyle(const BrushStyle &style);

    //! returnt the pen of a shape
    QPen getPen(){return pen;};

    //! pure virtual get area of shape
    virtual int getArea(){return 0;};

    //! pure virtual get perimeter of shape
    virtual int getPerim(){return 0;};

    //! Pure virtual get top right corner of shape
    virtual QPoint getPos(){return {0,0};};

    //! virtual draw to register shape on canvas
    virtual void draw(QPaintDevice* device);
   // virtual void move(int x1, int x2);


    QString getShapeName(){return shapeName;};

    QPen pen;

    QBrush brush;

    QPainter painter;


protected:
    QString shapeName;

private:
    int shapeID;

};

#endif // SHAPE_H

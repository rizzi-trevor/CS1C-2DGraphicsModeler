#ifndef SHAPE_H
#define SHAPE_H

#include <QBrush>
#include <QPainter>
#include <QPen>
#include <QPoint>

using namespace Qt;
class Shape
{
public:
    Shape();

    Shape(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width);

    //virtual ~Shape();

    int getShapeID(){return shapeID;};

    void setPenWidth(int width);

    void setPenColor(const QColor &color);

    void setPenStyle(const PenStyle &style);

    void setPenCapStyle(const PenCapStyle &style);

    void setPenJoinStyle(const PenJoinStyle &style);

    void setBrushColor(const QColor &color);

    void setBrushStyle(const BrushStyle &style);

    QPen getPen(){return pen;};

    virtual int getArea(){return 0;};
    virtual int getPerim(){return 0;};

    QPen pen;

    QBrush brush;


protected:

private:
    int shapeID;

};

#endif // SHAPE_H

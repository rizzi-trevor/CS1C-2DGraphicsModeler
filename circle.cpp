#include "circle.h"

Circle::Circle(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int radius, int x, int y)
       :Shape(color, Pstyle, PCstyle, PJstyle, Bstyle, width, id)
{
    this->radius = radius;
    setCenter(x,y);
}

void Circle::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawEllipse(startPoint.rx(), startPoint.ry(), radius, radius);
    painter.end();

}

void Circle::move(int x, int y)
{
    setCenter(x, y);
}

void Circle::setCenter(int x, int y)
{
    startPoint.setX(x);
    startPoint.setY(y);
}

void Circle::setRadius(int r)
{
    radius = r;
}




#include "ellipse.h"

Ellipse::Ellipse(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int a, int b, int x, int y)
        :Shape(color, Pstyle, PCstyle, PJstyle, Bstyle, width, id)
{

}


void Ellipse::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse(startPoint.rx(), startPoint.ry(), a, b);
    painter.end();

}


void Ellipse::move(int x, int y)
{
    setCenter(x , y);

}

void Ellipse::setCenter(int x, int y)
{
    startPoint.setX(x);
    startPoint.setY(y);
}

void Ellipse::setA(int a)
{
    this->a = a;
}

void Ellipse::setB(int b)
{
    this->b = b;
}

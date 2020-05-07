#include "rectangle.h"

Rectangle::Rectangle()
          :Shape()
{

}

Rectangle::Rectangle(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int l, int w, int x, int y)
          :Shape(bColor, color, Pstyle, PCstyle, PJstyle, Bstyle, width, id)
{

    startPoint.setX(x);
    startPoint.setY(y);
    width = w;
    length = l;

}

Rectangle::~Rectangle()
{

}


void Rectangle::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(startPoint.rx(), startPoint.ry(), width, length);
    painter.end();

}

void Rectangle::move(int x, int y)
{
    setCenter(x , y);
}

void Rectangle::setCenter(int x, int y)
{
    startPoint.setX(x);
    startPoint.setY(y);

}

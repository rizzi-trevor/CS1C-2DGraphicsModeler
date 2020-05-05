#include "line.h"

Line::Line(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id)
     :Shape(color, Pstyle, PCstyle, PJstyle, Bstyle, width, id)
{
    start.setX(0);
    start.setY(0);
    end.setX(100);
    end.setY(100);

}

Line::~Line(){}

void Line::draw(QPaintDevice* device)
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawLine(start, end);
    painter.end();

}

void Line::move(int x, int y)
{
    QPoint sPoint = getStart();
    int offX = sPoint.x();
    int offY = sPoint.y();

    QPoint ePoint = getEnd();
    int endX = ePoint.x();
    int endY = ePoint.y();

    setStart(x,y);
    setEnd(endX + offX, endY + offY);
}

void Line::setStart(int x, int y)
{
    start.setX(x);
    start.setY(y);

}

void Line::setEnd(int x, int y)
{
    end.setX(x);
    end.setY(y);

}

#include "shape.h"

using namespace Qt;

Shape::Shape()
{
    pen.setColor(black);
    pen.setWidth(1);
    pen.setStyle(SolidLine);
    pen.setCapStyle(FlatCap);
    pen.setJoinStyle(MiterJoin);
    brush.setColor(black);
    brush.setStyle(SolidPattern);
    shapeID = 1;
}

Shape::Shape(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id)
{
    pen.setColor(color);
    pen.setWidth(width);
    pen.setStyle(Pstyle);
    pen.setCapStyle(PCstyle);
    pen.setJoinStyle(PJstyle);
    brush.setColor(color);
    brush.setStyle(Bstyle);

    shapeID = id;

}


void Shape::setPenWidth(int width)
{
    pen.setWidth(width);

}

void Shape::setPenColor(const QColor &color)
{
   pen.setColor(color);

}

void Shape::setPenStyle(const PenStyle &style)
{
    pen.setStyle(style);
}

void Shape::setPenCapStyle(const PenCapStyle &style)
{
    pen.setCapStyle(style);
}

void Shape::setPenJoinStyle(const PenJoinStyle &style)
{
   pen.setJoinStyle(style);
}

void Shape::setBrushColor(const QColor &color)
{
    brush.setColor(color);
}

void Shape::setBrushStyle(const BrushStyle &style)
{
   brush.setStyle(style);
}

void Shape::draw(QPaintDevice* device)
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}













#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape
{
public:
    Rectangle();
    Rectangle(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int l, int w, int x, int y);
    ~Rectangle();

    void setCenter(int x, int y);

    void setLength(int l){length = l;};
    void setWidth(int w){width = w;};
    int getWidth(){return width;};
    int getLength(){return length;};

    virtual void draw(QPaintDevice* device);
    virtual void move(int x, int y);

private:
    QPoint startPoint;
    int length;
    int width;
};

#endif // RECTANGLE_H

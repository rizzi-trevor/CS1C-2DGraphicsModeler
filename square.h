#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape
{
public:
    Square();
    Square(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int w, int x, int y);
    ~Square();

    void setCenter(int x, int y);

    void setWidth(int w){width = w;};
    int getWidth(){return width;};

    virtual void draw(QPaintDevice* device);
    virtual void move(int x, int y);

private:
    QPoint startPoint;
    int width;
};

#endif // SQUARE_H

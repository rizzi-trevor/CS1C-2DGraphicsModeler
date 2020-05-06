#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse: public Shape
{
public:
    Ellipse(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int a, int b, int x, int y);
    ~Ellipse();

    virtual void draw(QPaintDevice* device);

    virtual void move(int x, int y);

    void setCenter(int x, int y);

    void setA(int a);

    void setB(int b);

    virtual int getArea(){return (M_PI * a * b);};

    int getA(){return a;};
    int getB(){return b;};

private:
    QPoint startPoint;
    int a;
    int b;
};

#endif // ELLIPSE_H

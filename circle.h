#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape
{
public:
    Circle(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int radius, int x, int y);
    ~Circle();

    virtual void draw(QPaintDevice* device);

    virtual void move(int x, int y);

    void setCenter(int x, int y);

    void setRadius(int r);

    virtual int getArea(){return (int)(M_PI * (pow(radius,2)));};

    virtual int getPerim(){return (int)(2 * M_PI * radius);};

    int getRadius(){return radius;};

private:
    QPoint startPoint;
    int radius;


};

#endif // CIRCLE_H

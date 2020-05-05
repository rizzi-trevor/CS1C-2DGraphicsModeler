#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse: public Shape
{
public:
    Ellipse();

    virtual void draw(QPaintDevice* device);
};

#endif // ELLIPSE_H

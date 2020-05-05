#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape
{
public:
    Rectangle();

    virtual void draw(QPaintDevice* device);
};

#endif // RECTANGLE_H

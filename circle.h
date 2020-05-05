#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape
{
public:
    Circle();

    virtual void draw(QPaintDevice* device);
};

#endif // CIRCLE_H

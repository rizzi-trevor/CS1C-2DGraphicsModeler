#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class Polyline: public Shape
{
public:
    Polyline();

    virtual void draw(QPaintDevice* device);
};

#endif // POLYLINE_H

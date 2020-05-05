#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon: public Shape
{
public:
    Polygon();

    virtual void draw(QPaintDevice* device);
};

#endif // POLYGON_H

#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon: public Shape
{
public:
    Polygon();
    ~Polygon();

    virtual void draw(QPaintDevice* device);

    void addPoint(int x, int y);

private:
    QPoint *pointList;
    int pointCount;
};

#endif // POLYGON_H

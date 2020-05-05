#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape
{
public:
    Square();

    virtual void draw(QPaintDevice* device);
};

#endif // SQUARE_H

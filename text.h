#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

class Text: public Shape
{
public:
    Text();

    ~Text();

    virtual void draw(QPaintDevice* device);
};

#endif // TEXT_H

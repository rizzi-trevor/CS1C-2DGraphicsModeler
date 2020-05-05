#include "ellipse.h"

Ellipse::Ellipse()
{

}

void Ellipse::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}

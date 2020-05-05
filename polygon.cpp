#include "polygon.h"

Polygon::Polygon()
{

}

void Polygon::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}

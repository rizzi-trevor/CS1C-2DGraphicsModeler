#include "polyline.h"

Polyline::Polyline()
{

}

void Polyline::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}

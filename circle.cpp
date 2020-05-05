#include "circle.h"

Circle::Circle()
{

}


void Circle::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}

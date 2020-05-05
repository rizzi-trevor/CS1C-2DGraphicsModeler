#include "square.h"

Square::Square()
{

}

void Square::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}

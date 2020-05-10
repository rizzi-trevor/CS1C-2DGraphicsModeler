#include "text.h"

Text::Text()
{

}


void Text::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.end();

}

//need to add shapeName = "Text";

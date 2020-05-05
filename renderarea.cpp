#include "renderarea.h"

RenderArea::RenderArea(QWidget *parent)
{


}

void RenderArea::paintEvent(QPaintEvent *)
{
    QPaintDevice* device = this;

    myVec::vector<Shape*>::iterator i = shapeList.begin();

    while(i < shapeList.end())
    {
        (*i)->draw(device);
        ++i;
    }

}

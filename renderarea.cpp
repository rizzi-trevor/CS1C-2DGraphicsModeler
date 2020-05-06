#include "renderarea.h"

RenderArea::RenderArea(QWidget *parent)
           :QWidget(parent)
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

void RenderArea::addShape(Shape* addShape)
{
    shapeList.push_back(addShape);
}

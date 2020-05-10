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

myVec::vector<Shape*> RenderArea::returnShapeList()
{
    return shapeList;
}


void RenderArea::removeShape(int index)
{
    bool found = false;

    myVec::vector<Shape*>::iterator i = shapeList.begin();

    while(found == false && i < shapeList.end())
    {
        if((*i)->getShapeID() == index)
        {
            shapeList.erase(i);
            found = true;
        }

        ++i;
    }
}

Shape *RenderArea::shapeAtID(int ID)
{
    myVec::vector<Shape*>::iterator i = shapeList.begin();

    while(i < shapeList.end())
    {
        if((*i)->getShapeID() == ID)
        {
            return *i;
        }
        ++i;
    }

    return NULL;

}
void RenderArea::setShape(Shape &src)
{
    int ID = src.getShapeID();

    for(int i = 0; i < shapeList.size(); i++)
    {
        if(shapeList[i]->getShapeID() == ID)
        {
           qDebug() << src.getPen();
           shapeList[i] = &src;
           qDebug() << shapeList[i]->getPen();
           qDebug() << src.getPen();
        }

    }
}




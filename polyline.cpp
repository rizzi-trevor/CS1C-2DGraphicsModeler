#include "polyline.h"

Polyline::Polyline() : Shape()
{
    pointList = new QPoint[5];
    pointCount = 0;
}
Polyline::Polyline(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, vector<QPoint> Qpoints)
        :Shape(bColor, color, Pstyle, PCstyle, PJstyle, Bstyle, width, id)
{
    pointList = new QPoint[5]; // maybe change from 5??
    for(unsigned int i = 0; i < Qpoints.size(); i++)
    {
        pointList[i] = Qpoints[i];
    }

    pointCount = Qpoints.size();

}

Polyline::~Polyline()
{
    delete []pointList;
}

void Polyline::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawPolyline(pointList, pointCount);
    painter.end();

}

void Polyline::move(int x, int y)
{
    int offsetX = x - pointList[0].x();
    int offsetY = y - pointList[0].y();

    for (int i = 0; i < pointCount; ++i)
    {
        pointList[i].setX(pointList[i].x()+offsetX);
        pointList[i].setY(pointList[i].y()+offsetY);
    }

}

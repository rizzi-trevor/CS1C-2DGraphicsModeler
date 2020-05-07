#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon: public Shape
{
public:
    Polygon();
    Polygon(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int x, int y);
    ~Polygon();
 
    virtual void draw(QPaintDevice* device);

    void addPoint(int x, int y);
    void initializeList();
    void draw(QPaintDevice *device);
    void move(int x, int y);
    virtual int getPerimeter();
    virtual double getArea();

private:
    QPoint *pointList;
    int pointCount;
    vector <QPoint> qPt;
};

#endif // POLYGON_H

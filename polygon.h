#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "vector.h"

class Polygon: public Shape
{
public:
    Polygon();
    Polygon(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, vector<QPoint> Qpoints);
    ~Polygon();

    void addPoint(int x, int y);

    void initializeList();

    virtual void draw(QPaintDevice* device);

    virtual void move(int x, int y);

    virtual int getPerimeter();

    virtual int getArea();

private:
    QPoint *pointList;
    int pointCount;
    vector<QPoint> points;

};

#endif // POLYGON_H

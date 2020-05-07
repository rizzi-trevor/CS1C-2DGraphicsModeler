#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"
#include "vector.h"

class Polyline: public Shape
{
public:
    Polyline();
    Polyline(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, vector<QPoint> Qpoints);
    ~Polyline();

    void addPoint(int x, int y);

    virtual void draw(QPaintDevice* device);
    virtual void move(int x, int y);

private:
    QPoint * pointList;
    int pointCount;
};

#endif // POLYLINE_H

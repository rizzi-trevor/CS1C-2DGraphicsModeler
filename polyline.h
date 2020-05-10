#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"
#include "vector.h"

class Polyline: public Shape
{
public:
    //! construct polyline shape
    Polyline();

    //! construct polyline shape with parameters
    Polyline(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, vector<QPoint> Qpoints);

    //! destruct polyline
    ~Polyline();

    //! add point to the polyline list of points
    void addPoint(int x, int y);

    //! draw the polyline to canvas
    virtual void draw(QPaintDevice* device);

    //! move the polyline on the canvas
    virtual void move(int x, int y);

    Polyline &operator=(const Polyline &src);

private:
    QPoint * pointList;
    int pointCount;
};

#endif // POLYLINE_H

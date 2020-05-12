#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "vector.h"

class Polygon: public Shape
{
public:

    //! construct polygon
    Polygon();

    //! construct polygon with parameters
    Polygon(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, vector<QPoint> Qpoints);

    //! destruct polygon
    ~Polygon();


    //! add point to polygon
    void addPoint(int x, int y);

    //! initialize list of points for polygon
    void initializeList();

    //! draw polygon to the canvas
    virtual void draw(QPaintDevice* device);

    //! move the polygon on the canvas
    virtual void move(int x, int y);

    //! get the perimeter of the polygon
    virtual int getPerimeter();

    //! get the area of the polygon
    virtual int getArea();

    vector<QPoint> returnPoints(){return points;};

    Polygon &operator=(const Polygon &src);

private:
    QPoint *pointList;
    int pointCount;
    vector<QPoint> points;

};

#endif // POLYGON_H

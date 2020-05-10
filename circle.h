#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape
{
public:

    //! Constructs Circle class
    Circle(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int radius, int x, int y);

    //! Deconstructs Circle Class
    ~Circle();

    //! Draws the shape to the canvas
    virtual void draw(QPaintDevice* device);

    //! Moves the location of the shape on the canvas
    virtual void move(int x, int y);

    //! Sets the center of circle
    void setCenter(int x, int y);

    //! Sets the radius of the circle
    void setRadius(int r);

    //! Gets the area of the circle
    virtual int getArea(){return (int)(M_PI * (pow(radius,2)));};


    //! Gets the perimeter of the circle
    virtual int getPerim(){return (int)(2 * M_PI * radius);};

    //!Gets the radius of the circle
    int getRadius(){return radius;};

    Circle &operator=(const Circle &src);

private:
    QPoint startPoint;
    int radius;


};

#endif // CIRCLE_H

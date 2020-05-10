#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse: public Shape
{
public:

    //! Ellipse overloaded constructor
    Ellipse(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int a, int b, int x, int y);

    //! Destructs ellipse class
    ~Ellipse();

    //! Draws the shape to the canvas
    virtual void draw(QPaintDevice* device);

    //! Moves the location of the shape on the canvas
    virtual void move(int x, int y);

    //! set the center of ellipse
    void setCenter(int x, int y);

    //! set A length of ellipse
    void setA(int a);

    //! set B length of ellipse
    void setB(int b);

    //! get area of the ellipse
    virtual int getArea(){return (M_PI * a * b);};

    //! get A length
    int getA(){return a;};

    //1 get B length
    int getB(){return b;};


private:
    QPoint startPoint;
    int a;
    int b;
};

#endif // ELLIPSE_H

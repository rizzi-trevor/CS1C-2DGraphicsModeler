#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape
{
public:

    //! Construct rectangle
    Rectangle();

    //! construct rectangle with style parameters
    Rectangle(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int l, int w, int x, int y);

    //! destruct rectangle
    ~Rectangle();

    //! set center of rectangle
    void setCenter(int x, int y);

    //! set length of rectangle
    void setLength(int l){length = l;};

    //! set width of rectangle
    void setWidth(int w){width = w;};

    //! get width of rectangle
    int getWidth(){return width;};

    //!get length
    int getLength(){return length;};

    //! draw rectangle to canvas
    virtual void draw(QPaintDevice* device);

    //! move rectangle on canvas
    virtual void move(int x, int y);

    Rectangle &operator=(const Rectangle &src);

    QRect getRect();

private:
    QPoint startPoint;
    int length;
    int width;
};

#endif // RECTANGLE_H

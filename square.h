#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape
{
public:

    //! Square COnstructor
    Square();

    //! square constructor with params
    Square(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, int w, int x, int y);

    //! destructs square
    ~Square();

    //! set center of square
    void setCenter(int x, int y);

    //! set width of square
    void setWidth(int w){width = w;};

    //! get width of square
    int getWidth(){return width;};


    //! draw square to canvas
    virtual void draw(QPaintDevice* device);

    //! move square on canvas
    virtual void move(int x, int y);

    Square &operator=(const Square &src);

private:
    QPoint startPoint;
    int width;
};

#endif // SQUARE_H

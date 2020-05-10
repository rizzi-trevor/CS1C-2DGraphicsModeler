#ifndef LINE_H
#define LINE_H

#include "shape.h"


class Line: public Shape
{
public:
    //! construct line
    Line(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, QPoint s, QPoint e);

    //! destruct line
    ~Line();

    //! draw line to canvas
    virtual void draw(QPaintDevice* device);

    //! move line on canvas
    virtual void move(int x, int y);

    //! set starting point of line
    void setStart(int x, int y);

    //! set ending point of line
    void setEnd(int x, int y);

    //! get ending point
    QPoint getEnd(){return end;};

    //! get starting point
    QPoint getStart(){return start;};


private:
    QPoint start;
    QPoint end;
};

#endif // LINE_H

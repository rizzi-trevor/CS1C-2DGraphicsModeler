#ifndef LINE_H
#define LINE_H

#include "shape.h"


class Line: public Shape
{
public:
    Line(const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id);

    ~Line();

    virtual void draw(QPaintDevice* device);

    virtual void move(int x, int y);

    void setStart(int x, int y);

    void setEnd(int x, int y);

    QPoint getEnd(){return end;};

    QPoint getStart(){return start;};

private:
    QPoint start;
    QPoint end;
};

#endif // LINE_H

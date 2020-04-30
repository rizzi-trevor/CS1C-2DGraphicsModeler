#ifndef LINE_H
#define LINE_H

#include "shape.h"


class Line: public Shape
{
public:
    Line();

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

#ifndef RENDERAREA_H
#define RENDERAREA_H

#include "shape.h"
#include "vector.h"
#include "fileparser.h"
#include <QDebug>
#include "QDebug"

#include <QWidget>

//was a QOpenGlWdiget

class RenderArea : public QWidget
{
        Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = 0);

    void addShape(Shape* addShape);
    void removeShape(int index);

    int listSize();
    int shapeIdAtIndex(int index);

    Shape shapeAtIndex(int index);

protected:
    void paintEvent(QPaintEvent *event) override;

private:

    myVec::vector<Shape*> shapeList = ParseFile(0);

   // myVec::vector<Shape*> shapeList;

};

#endif // RENDERAREA_H

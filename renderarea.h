#ifndef RENDERAREA_H
#define RENDERAREA_H

#include "shape.h"
#include "vector.h"
#include "fileparser.h"

#include <QWidget>

//was a QOpenGlWdiget

class RenderArea : public QWidget
{
        Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = 0);

    void addShape(int index, int val);
    void removeShape(int index);

    int listSize();
    int shapeIdAtIndex(int index);

    Shape shapeAtIndex(int index);

signals:

protected:
    //void paintEvent(QPaintEvent *event) override;

private:

    myVec::vector<Shape*> shapeList = ParseFile(12);
    //create the vector here!

};

#endif // RENDERAREA_H

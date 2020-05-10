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
    //! explicit render area constructor
    explicit RenderArea(QWidget *parent = 0);

    //! add shape to shape vector
    void addShape(Shape* addShape);

    //! remove shape from shape vector
    void removeShape(int index);

    myVec::vector<Shape*> returnShapeList();

    //! return list size of shape vector
    int listSize();

    //! return the id of a shape at a given index
    int shapeIdAtIndex(int index);


    //! return the shape at a given ID
    Shape *shapeAtID(int ID);

    void setShape(Shape &src);

protected:

    //! paint the shape vector to the canvas
    void paintEvent(QPaintEvent *event) override;

private:

    myVec::vector<Shape*> shapeList = ParseFile(0);

};

#endif // RENDERAREA_H

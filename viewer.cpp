#include "viewer.h"
#include "ui_viewer.h"

viewer::viewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::viewer)
{
    ui->setupUi(this);

    Line *myLine = new Line(black, SolidLine, FlatCap, MiterJoin, NoBrush, 20, 1);

    Circle *myCircle = new Circle(black, SolidLine, FlatCap, MiterJoin, NoBrush, 20, 3, 100, 100, 100);

    ui->canvas->addShape(myCircle);
    ui->canvas->addShape(myLine);

    ui->canvas->update();

}

viewer::~viewer()
{
    delete ui;
}

#include "viewer.h"
#include "ui_viewer.h"

viewer::viewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::viewer)
{
    ui->setupUi(this);

    //Line *myLine = new Line(black, SolidLine, FlatCap, MiterJoin, NoBrush, 20, 1);

    //Ellipse *myEllipse = new Ellipse(white, green, DashLine, FlatCap, MiterJoin, NoBrush, 5, 6, 50, 100, 400, 400);

    //Circle *myCircle = new Circle(magenta, black, SolidLine, FlatCap, MiterJoin, VerPattern, 12, 7, 200, 750, 150);

    //vector<QPoint> quickVec;

    //QPoint temp;

    //temp.setX(100);
    //temp.setY(300);

    //quickVec.push_back(temp);

    //temp.setX(300);
    //temp.setY(100);

    //quickVec.push_back(temp);

    //temp.setX(300);
    //temp.setY(300);

    //quickVec.push_back(temp);

    //Square *myRectangle = new Square(red, blue, DashLine, RoundCap, RoundJoin, VerPattern, 10, 5, 20, 200, 100);

    //Polyline *myPolyline = new Polyline(magenta, black, SolidLine, FlatCap, MiterJoin, SolidPattern, 12, 5, quickVec);

    //ui->canvas->addShape(myCircle);
   // ui->canvas->addShape(myLine);
    //ui->canvas->addShape(myEllipse);
    //ui->canvas->addShape(myPolyline);
    //ui->canvas->addShape(myRectangle);


    ui->canvas->update();

}

viewer::~viewer()
{
    delete ui;
}

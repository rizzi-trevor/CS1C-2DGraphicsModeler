#include "viewer.h"
#include "ui_viewer.h"
#include "confirmpage.h"

int shapeID::I_D = 0;

viewer::viewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::viewer)
{
    ui->setupUi(this);

    ui->canvas->update();


}

viewer::~viewer()
{
    delete ui;
}

void viewer::onAddLine()
{
    shapeID::I_D = 1;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.myLine);
    }

    ui->canvas->update();

}

void viewer::onAddPolyline()
{
    shapeID::I_D = 2;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.myPolyline);
    }

    ui->canvas->update();
}

void viewer::onAddPolygon()
{
    shapeID::I_D = 3;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.myPolygon);
    }

    ui->canvas->update();
}

void viewer::onAddRectangle()
{
    shapeID::I_D = 4;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.myRectangle);
    }

    ui->canvas->update();
}

void viewer::onAddSquare()
{
    shapeID::I_D = 5;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.mySquare);
    }

    ui->canvas->update();
}

void viewer::onAddEllipse()
{
    shapeID::I_D = 6;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.myEllipse);
    }

    ui->canvas->update();
}

void viewer::onAddCircle()
{
    shapeID::I_D = 7;
    confirmpage confirm;
    bool check = false;

    confirm.setModal(true);
    confirm.exec();
    check = confirm.getData();

    if(check == true)
    {
        ui->canvas->addShape(confirm.myCircle);
    }

    ui->canvas->update();
}

void viewer::onAddText()
{
    shapeID::I_D = 8;

}


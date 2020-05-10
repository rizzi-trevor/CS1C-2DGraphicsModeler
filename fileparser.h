#ifndef FILEPARSER_H
#define FILEPARSER_H

#include <iostream>
#include <fstream>
#include "shape.h"
#include "line.h"
#include "circle.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "text.h"
#include "vector.h"

using namespace std;

//! Parse file to read in shapes
myVec::vector<Shape*> ParseFile(int size);

//! read a line shape
Shape* readLine(ifstream &inFile);

//! read a polyline
Shape* readPolyLine(ifstream &inFile);

//! read a polygon
Shape* readPolygon(ifstream &inFile);

//! read a rectangle
Shape* readRectangle(ifstream &inFile);

//! read a square
Shape* readSquare(ifstream &inFile);

//! read an ellipse
Shape* readEllipse(ifstream &inFile);

//! read a circle
Shape* readCircle(ifstream &inFile);

//! read text
Shape* readText(ifstream &inFile);

//! get a QColor from a string
QColor getColor(string color);

//! get a pen style from a string
PenStyle getPenStyle(string style);

//! get a brush style from string
BrushStyle getBrushStyle(string brush);

//! get a pen join style from string
PenJoinStyle getPJStyle(string join);

//! get a pen cap style from string
PenCapStyle getPCStyle(string cap);



#endif // FILEPARSER_H

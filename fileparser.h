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

myVec::vector<Shape*> ParseFile(int size);

Shape* readLine(ifstream &inFile);
Shape* readPolyLine(ifstream &inFile);
Shape* readPolygon(ifstream &inFile);
Shape* readRectangle(ifstream &inFile);
Shape* readSquare(ifstream &inFile);
Shape* readEllipse(ifstream &inFile);
Shape* readCircle(ifstream &inFile);
Shape* readText(ifstream &inFile);

QColor getColor(string color);
PenStyle getPenStyle(string style);
BrushStyle getBrushStyle(string brush);
PenJoinStyle getPJStyle(string join);
PenCapStyle getPCStyle(string cap);



#endif // FILEPARSER_H

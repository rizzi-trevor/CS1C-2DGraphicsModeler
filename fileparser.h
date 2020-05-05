#ifndef FILEPARSER_H
#define FILEPARSER_H

#include <iostream>
#include <fstream>
#include "shape.h"
#include "line.h"
#include "vector.h"

using namespace std;

myVec::vector<Shape*> ParseFile(int size);

Shape* readLine(ifstream &inFile, int id);
Shape* readPolyLine(ifstream &inFile, int id);
Shape* readPolygon(ifstream &inFile, int id);
Shape* readRectangle(ifstream &inFile, int id);
Shape* readSquare(ifstream &inFile, int id);
Shape* readEllipse(ifstream &inFile, int id);
Shape* readCircle(ifstream &inFile, int id);
Shape* readText(ifstream &inFile, int id);

QColor getColor(string color);
PenStyle getPenStyle(string style);
BrushStyle getBrushStyle(string brush);
PenJoinStyle getPJStyle(string join);
PenCapStyle getPCStyle(string cap);



#endif // FILEPARSER_H

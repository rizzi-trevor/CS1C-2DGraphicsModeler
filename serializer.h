#ifndef SERIALIZER_H
#define SERIALIZER_H

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
#include <ostream>

std::ostream& operator<<(std::ostream& out, myVec::vector<Shape*> &shapes);

string brushToString(QBrush brush);
string PJtoString(QPen join);
string PCtoString(QPen cap);
string penToString(QPen style);
string colorToString(QColor color);
string fontWeightToString(QFont fontWeight);
string fontStyleToString(QFont fontStyle);
string alignToString(AlignmentFlag alignment);

#endif // SERIALIZER_H

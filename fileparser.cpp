#include "fileparser.h"
#include <QColor>

myVec::vector<Shape*> ParseFile(int size)
{
    ifstream inFile;

    inFile.open("shapes.txt");


    myVec::vector<Shape*> returnShapes(size);
    int id;

    while(inFile)
    {
        string temp;

        inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':');
        inFile >> id;
        inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':');

        inFile >> temp;


        if(inFile.eof())
        {
            break;
        }


        switch(id)
        {
        case 1: // line

            returnShapes.push_back(readLine(inFile, id));
            break;

        case 2:// Polyline
            break;

        case 3:// Polygon
            break;

        case 4:// Rectangle
            break;

        case 5:// Square
            break;

        case 6:// Ellipse
            break;

        case 7:// Circle
            break;

        case 8:// Text
            break;

        default:
            //QDebug()<< "Error parsing file!!";
            break;



        }
    }
}


Shape* readLine(ifstream &inFile, int id)
{
    int x, y, x2, y2, width;
    string color, style, cap, join;
    QColor qtColor;
    PenStyle qtStyle;
    PenCapStyle qtCap;
    PenJoinStyle qtJoin;
    BrushStyle qtBrush = NoBrush;

    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':');
    inFile >> x;
    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ',');
    inFile >> y;
    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ',');
    inFile >> x2;
    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ',');
    inFile >> y2;

    QPoint front(x, y);
    QPoint end(x2, y2);

    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':'); // get color
    getline(inFile, color);
    qtColor = getColor(color);

    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':'); // get width
    inFile >> width;

    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':'); // get style
    getline(inFile, style);
    qtStyle = getPenStyle(style);

    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':'); // get cap
    getline(inFile, cap);
    qtCap = getPCStyle(cap);

    inFile.ignore(std::numeric_limits<std::streamsize>::max(), ':'); // get join
    getline(inFile, join);
    qtJoin = getPJStyle(join);


    Line *line = new Line(qtColor, qtStyle, qtCap, qtJoin, qtBrush, width, id);
    return line;
}

Shape* readPolyLine(ifstream &inFile, int id)
{

}


QColor getColor(string color)
{
    if(color == "white"){
        return white;
    }
    else if(color == "black"){
        return black;
    }
    else if(color == "red"){
        return red;
    }
    else if(color == "green"){
        return green;
    }
    else if(color == "blue"){
        return blue;
    }
    else if(color == "cyan"){
        return cyan;
    }
    else if(color == "magenta"){
        return magenta;
    }
    else if(color == "yellow"){
        return yellow;
    }
    else if(color == "gray"){
        return gray;
    }

}

PenStyle getPenStyle(string style)
{
    if(style == "NoPen"){
        return NoPen;
    }
    else if(style == "SolidLine"){
        return SolidLine;
    }
    else if(style == "DashLine"){
        return DashLine;
    }
    else if(style == "DotLine"){
        return DotLine;
    }
    else if(style == "DashDotLine"){
        return DashDotLine;
    }
    else if(style == "DashDotDotLine"){
        return DashDotDotLine;
    }
}

PenCapStyle getPCStyle(string cap)
{
    if(cap == "FlatCap"){
        return FlatCap;
    }
    else if(cap == "SquareCap"){
        return SquareCap;
    }
    else if(cap == "RoundCap"){
        return RoundCap;
    }
}

PenJoinStyle getPJStyle(string join)
{
    if(join == "MiterJoin"){
        return MiterJoin;
    }
    else if(join == "BevelJoin"){
        return BevelJoin;
    }
    else if(join == "RoundJoin"){
        return RoundJoin;
    }
}

BrushStyle getBrushStyle(string brush)
{
    if(brush == "SolidPattern"){
        return SolidPattern;
    }
    else if(brush == "HorPattern"){
        return HorPattern;
    }
    else if(brush == "VerPattern"){
        return VerPattern;
    }
    else if(brush == "NoBrush"){
        return NoBrush;
    }
}


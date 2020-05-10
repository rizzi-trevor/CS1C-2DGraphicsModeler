#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include <string>

class Text: public Shape
{
public:
    Text();
    ~Text();

    virtual void draw(QPaintDevice* device);
    virtual void move(int xCoord, int yCoord);
    
    int getCenterPointX();
    int getCenterPointY();
    int getLength();
    int getWidth();
    
    void setCenterPoint(int xCoord, int yCoord);
    void setLength(int lengthValue);
    void setWidth(int widthValue);
    void setTextString(string text);
    void setTextAlignment(int alignment);
    void setTextPointSize(int pointSize);
    void setTextColor(string color);
    void setFontFamily(string fontFamily);
    void setFontStyle(string fontStyle);
    void setFontWeight(string fontWeight);
    
private:
    int fontAlignment;
    QString textString;
    QFont font;
    QPoint startPoint;
    int length;
    int width;
    
};

#endif // TEXT_H

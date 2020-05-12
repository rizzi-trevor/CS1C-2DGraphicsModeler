#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include <string>

class Text: public Shape
{
public:
    Text();

    Text(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, string alignment, string fontFam, string fontStyle, string weight, string text, int x, int y, int textL, int textW);

    ~Text();

    virtual void draw(QPaintDevice* device);
    virtual void move(int xCoord, int yCoord);
    
    int getCenterPointX();
    int getCenterPointY();
    int getLength();
    int getWidth();
    AlignmentFlag getAlign(){return align;};
    QFont getFont(){return font;};
    QString getText(){return textString;};
    
    void setCenterPoint(int xCoord, int yCoord);
    void setLength(int lengthValue);
    void setWidth(int widthValue);
    void setTextString(string text);
    void setTextAlignment(string alignment);
    void setTextPointSize(int pointSize);
    void setTextColor(string color);
    void setFontFamily(string fontFamily);
    void setFontStyle(string fontStyle);
    void setFontWeight(string fontWeight);

    QPoint getStart(){return startPoint;};
    
private:
    AlignmentFlag align;
    QString textString;
    QFont font;
    QPoint startPoint;
    int length;
    int width;

    
};

#endif // TEXT_H

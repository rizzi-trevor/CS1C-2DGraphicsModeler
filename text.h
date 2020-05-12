#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include <string>

class Text: public Shape
{
public:

    //! Constructs Text
    Text();
    
    //! Constructs Text with params
    Text(const QColor &bColor, const QColor &color, const PenStyle &Pstyle, const PenCapStyle &PCstyle, const PenJoinStyle &PJstyle, const BrushStyle &Bstyle, int width, int id, string alignment, string fontFam, string fontStyle, string weight, string text, int x, int y, int textL, int textW);

    //! Deconstructs Text
    ~Text();

    //!Draws the Text to the canvas
    virtual void draw(QPaintDevice* device);
    //! Moves the location of the Text on the canvas
    virtual void move(int xCoord, int yCoord);
    
    //! Gets the center X coordinate
    int getCenterPointX();
    //! Gets the center y coordinate
    int getCenterPointY();
    //! Gets the length of the Text
    int getLength();
    //! Gets the width of the Text
    int getWidth();
    
    //! Sets the center point of the text
    void setCenterPoint(int xCoord, int yCoord);
    //! Sets the length of the text
    void setLength(int lengthValue);
    //! Sets the width of the text
    void setWidth(int widthValue);
    //! Sets the actual text being displayed
    void setTextString(string text);
    //! Sets the text allignment
    void setTextAlignment(string alignment);
    //! Sets the text size
    void setTextPointSize(int pointSize);
    //!Sets the text color
    void setTextColor(string color);
    //! Sets the text font
    void setFontFamily(string fontFamily);
    //! Sets the text style (italics, normal, oblique, etc...)
    void setFontStyle(string fontStyle);
    //! Sets the text weight (thin, light, bold, extra bold, etc...)
    void setFontWeight(string fontWeight);
    
private:
    AlignmentFlag align;
    QString textString;
    QFont font;
    QPoint startPoint;
    int length;
    int width;

    
};

#endif // TEXT_H

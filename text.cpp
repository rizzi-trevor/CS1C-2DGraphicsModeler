#include "text.h"

Text::Text()
     :Shape()
{
    fontAlignment = 0;
    textString = " ";
    font.setWeight(QFont::Thin);
    startPoint.setX(0);
    startPoint.setY(0);
    length = 0;
    width = 0;
}

Text::~Text(){
    
}

virtual void Text::draw(QPaintDevice* device) //needs change
{
    painter.begin(device);
    painter.setPen(getPen());
    painter.drawText(getCenterPointX(), getCenterPointY(), getLength(), getWidth(), fontAlignment, textString);
    painter.end();

}

virtual void Text::move(int xCoord, int yCoord){
    setCenterPoint(xCoord, yCoord);
}

int Text::getCenterPointX(){
    return startPoint.rx();
}

int Text::getCenterPointY(){
    return startPoint.ry();
}

int Text::getLength(){
    return length;
}

int Text::getWidth(){
    return width;
}

void Text::setCenterPoint(int xCoord, int yCoord){
    startPoint.setX(xCoord);
    startPoint.setY(yCoord);
}

void Text::setLength(int lengthValue){
    length = lengthValue;
}

void Text::setWidth(int widthValue){
    width = widthValue;
}

void Text::setTextString(string text){
    textString = QString::fromStdString(text);
}

void Text::setTextAlignment(int align){
    fontAlignment = align;
}

void Text::setTextPointSize(int pointSize){
    font.setPointSize(pointSize);
}

void Text::setTextColor(string color){
   //unfinished
}

void Text::setFontFamily(string fontFamily){
    if(fontFamily == "Comic Sans MS"){
        font.setFamily(QString("Comic Sans MS"));
    }
    else if(fontFamily == "Courier"){
        font.setFamily(QString("Courier"));
    }
    else if(fontFamily == "Helvetica"){
        font.setFamily(QString("Helvetica");
    }
    else if(fontFamily == "Times"){
        font.setFamily(QString("Times");
    }
    else{
        font.setFamiy(QString("Comic Sans MS");
    }
}
                     
void Text::setFontStyle(string fontStyle){
    if(fontStyle == "Normal"){
        font.setStyle(QFont::StyleNormal);
    }
    else if(fontStyle == "Italic"){
        font.setStyle(QFont::StyleItalic);
    }
    else if(fontStyle == "Oblique){
        font.setStyle(QFont::StyleOblique);
        }
    else{
        font.setStyle(QFont::StyleNormal);
    }
}
         
void Text::setFontWeight(string fontWeight){
    if(fontWeight == "Thin"){
        font.setWeight(QFont::Thin);
    }
    else if(fontWeight == "Light"){
        font.setWeight(QFont::Light);
    }
    else if(fontWeight == "Normal"){
        font.setWeight(QFont::Normal);
    }
    else if(fontWeight == "Medium"){
        font.setWeight(QFont::Medium);
    }
    else if(fontWeight == "Bold"){
        font.setWeight(QFont::Bold);
    }
    else if(fontWeight == "ExtraBold"){
        font.setWeight(QFont::ExtraBold);
    }
    else if(fontWeight == "Black"){
        font.setWeight(QFont::Black);
    }
    else{
        font.setWeight(QFont::Normal);
    }
}
            

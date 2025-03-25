#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    int getWidth();
    int getHeight();
    void setWidth(int newWidth);
    void setHeight(int newHeight);

    //virtual functions
    virtual int getArea() const=0;
    virtual void draw() const=0;


protected:
    int width = 0;
    int height = 0;

};

#endif // POLYGON_H

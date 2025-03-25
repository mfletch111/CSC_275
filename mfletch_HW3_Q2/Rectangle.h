//
// Created by marli on 3/24/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"


class Rectangle : public Polygon {
    public:
    Rectangle(); // default constructor declaration
    Rectangle (int width, int height); //constructor with parameters declaration

    int getArea() const override; // override for getArea function
    void draw() const override; //override for draw function

};



#endif //RECTANGLE_H

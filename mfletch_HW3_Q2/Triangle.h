//
// Created by marli on 3/24/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"


class Triangle : public Polygon {
    public:
    Triangle(); // declaring default constructor
    Triangle(int width, int height); // declaring constructor with parameters

    int getArea() const override; //override for getArea function
    void draw() const override; //override for draw function

};



#endif //TRIANGLE_H

//
// Created by marli on 3/24/2025.
//

#include "Rectangle.h"

#include <iostream>
#include <ostream>
using namespace std;

Rectangle::Rectangle() : Polygon() {} // default constructor definition
Rectangle::Rectangle(int width, int height) : Polygon(width, height) {} // constructor with parameters definition

int Rectangle::getArea() const { // defintion for getArea function
    return width * height;
}

void Rectangle::draw() const { // definition for draw function
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}




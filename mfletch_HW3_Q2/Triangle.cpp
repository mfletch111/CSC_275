//
// Created by marli on 3/24/2025.
//

#include "Triangle.h"

#include <iostream>
#include <ostream>
using namespace std;

Triangle::Triangle() : Polygon() {} // definition for default constructor

Triangle :: Triangle(int width, int height) : Polygon(width, height) {} // definition for constructor with parameters

int Triangle::getArea() const { // definition for getArea function
    return (width * height)/2;
}

void Triangle::draw() const { // definition for draw function
    int max_width = 2 * height - 1;

    for (int i = 0; i < height; i++) {
        int numStars = 2 * i + 1;
        int spaces = (max_width - numStars) / 2;  // Center alignment

        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < numStars; j++) {
            cout << "*";
        }

        cout << endl;  // Move to the next line
    }
}


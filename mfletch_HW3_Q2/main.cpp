/******************************************************************
 ** Author          : Marlie Fletcher
 ** Program         : HW3, Q2
 ** Date Created    : March 23, 2025
 ** Date Last Modified : March 24, 2025
 ** Usage           : No command line arguments
 **
 ** Problem:
 */

#include <iostream>
using namespace std;
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"

int main() {
    //Polygon poly;
    //Question1
    /*An error pops up saying Class Polygon is abstract,
    and both the getArea and draw functions are virtual
    since Polygon is abstract you have to use derived classes
    Rectangle or Triangle to create objects.*/

    //Question2
    /* I get essentially the same error message but only the draw
     function is a pure virtual function now. This is because we
     changed getArea to a virtual function but draw is still a pure virtual
     meaning Polygon is still and abstract class*/

    Rectangle rectangle(5,5); // rectangle object
    Triangle triangle(2,5); // triangle object

    //printing rectangle information
    cout << " rectangle height: " << rectangle.getHeight() << endl;
    cout << " rectangle width: " << rectangle.getWidth() << endl;
    cout << "rectangle area: " << rectangle.getArea() << endl;
    cout << "rectangle drawing: "  << endl;
    rectangle.draw();
    cout << endl;

    //printing triangle information
    cout << "triangle height: " << triangle.getHeight() << endl;
    cout << "triangle width: " << triangle.getWidth() << endl;
    cout << "triangle area: " << triangle.getArea() << endl;
    cout << "triangle drawing: "  << endl;
    triangle.draw();
    cout << endl;

    //creating another triangle
    Rectangle rectangle2(6,6);
    cout << "rectangle2 height: " << rectangle2.getHeight() << endl;
    cout << "rectangle2 width: " << rectangle2.getWidth() << endl;
    cout << "rectangle2 area: " << rectangle2.getArea() << endl;
    cout << "rectangle2 drawing: "  << endl;
    rectangle2.draw();
    cout << endl;

    //creating another rectangle
    Triangle triangle2(4,7);
    cout << "triangle2 height: " << triangle2.getHeight() << endl;
    cout << "triangle2 width: " << triangle2.getWidth() << endl;
    cout << "triangle2 area: " << triangle2.getArea() << endl;
    cout << "triangle2 drawing: "  << endl;
    triangle2.draw();
    cout << endl;

    return 0;
}
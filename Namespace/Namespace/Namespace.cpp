#define _USE_MATH_DEFINES
#include <iostream>
#include <stdexcept>
#include <cmath>
#include "Shapes.h"
#include "Point.h"

int main()
{
    Geometry::Point::Point2D point1 = Geometry::Point::Point2D(2, 5);
    Geometry::Point::Point3D point2 = Geometry::Point::Point3D(1, 3, 4);
    point1.printPoint();
    point2.printPoint();
    Geometry::Shapes::Rectangle shape1 = Geometry::Shapes::Rectangle(10, 20);
    Geometry::Shapes::RightTriangle shape2 = Geometry::Shapes::RightTriangle(5, 8);
    Geometry::Shapes::Circle shape3 = Geometry::Shapes::Circle(4);
    Geometry::Shapes::Trapezoid shape4 = Geometry::Shapes::Trapezoid(6, 9, 4);
    shape1.print();
    shape2.print();
    shape3.print();
    shape4.print();

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

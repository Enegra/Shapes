#include <iostream>
#include "Point.h"
#include "Square.h"

int main() {
    Point a = Point(1,1);
    Point b = Point(3,3);
    Rectangle rectangle = Rectangle(a, b);
    std::cout<< rectangle.getArea()<< std::endl;
    return 0;
}
//
// Created by agnie on 11/22/2016.
//

#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape{
private:
public:
    Rectangle();
    Rectangle(Point &a, Point &b);
    Rectangle(double p, double q, double r, double s);
    double getArea();
};


#endif //SHAPES_RECTANGLE_H

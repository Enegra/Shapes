//
// Created by agnie on 11/23/2016.
//

#ifndef SHAPES_CUBOID_H
#define SHAPES_CUBOID_H


#include "Shape.h"
#include "Rectangle.h"

class Cuboid : public Shape {
private:
public:
    Cuboid();
    Cuboid(Rectangle &rectangle, Point &point);
    Cuboid(Point &p, Point &q, Point &s);
    Cuboid(double p, double q, double r, double s, double t, double u);
};


#endif //SHAPES_CUBOID_H

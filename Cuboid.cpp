//
// Created by agnie on 11/23/2016.
//

#include "Cuboid.h"

Cuboid::Cuboid() {
}

Cuboid::Cuboid(Rectangle &rectangle, Point &point) {
    x = rectangle.getX();
    y = rectangle.getY();
    z = point;
}

Cuboid::Cuboid(Point &p, Point &q, Point &s) : Shape(p, q, s) {
    x = p;
    y = q;
    z = s;
}

Cuboid::Cuboid(double p, double q, double r, double s, double t, double u) {
    x = Point(p,q);
    y = Point(r,s);
    z = Point(t,u);
}

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

double Cuboid::getVolume() {
    double y1 = y.getY() - x.getY();
    double x1 = y.getX() - x.getX();
    double z1 = z.getZ() - x.getZ();
    double volume = y1 * x1 * z1;
    return volume;
}

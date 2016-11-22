//
// Created by agnie on 11/22/2016.
//

#include "Shape.h"

Shape::Shape() {
}

Shape::Shape(Point &a, Point &b) {
    x = a;
    y = b;
}

Shape::Shape(Point &a, Point &b, Point &c) {
    x = a;
    y = b;
    z = c;
}

Point Shape::getX() {
    return x;
}

Point Shape::getY() {
    return y;
}

Point Shape::getZ() {
    return z;
}

void Shape::setX(Point &a) {
    x = a;
}

void Shape::setY(Point &b) {
    y = b;
}

void Shape::setZ(Point &c) {
    z = c;
}

void Shape::setX(double &p, double &q) {
    x = Point(p,q);
}

void Shape::setY(double &p, double &q) {
    y = Point(p,q);
}

void Shape::setZ(double &p, double &q) {
    z = Point(p,q);
}

double Shape::getArea() {
    return 0;
}

double Shape::getVolume() {
    return 0;
}

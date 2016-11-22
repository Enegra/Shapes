//
// Created by agnie on 11/22/2016.
//

#include "Point.h"

Point::Point() {}

Point::Point(double a, double b) {
    x = a;
    y = b;
}

Point::Point(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

double Point::getZ() {
    return z;
}

void Point::setX(double &a) {
    x = a;
}

void Point::setY(double &b) {
    y = b;
}

void Point::setZ(double &c){
    z = c;
}
//
// Created by agnie on 11/22/2016.
//

#include <cmath>
#include "Rectangle.h"

Rectangle::Rectangle(Point &a, Point &b) {
    x = a;
    y = b;
}

Rectangle::Rectangle() {
}

Rectangle::Rectangle(double p, double q, double r, double s) {
    x = Point(p,q);
    y = Point(r,s);
}

double Rectangle::getArea() {
    double p = (x.getX() + y.getX())/2 - 1/2 * sqrt(pow(x.getX(),2) - 2*x.getX()*y.getX() + pow(x.getY(),2) - 2*x.getY()*y.getY() + pow(y.getX(),2) + pow(y.getY(),2));
    double q = (x.getY() + y.getY())/2 - 1/2 * sqrt(-4*x.getX()*y.getX()+4*x.getX()*p + pow(x.getY(),2) - 2*x.getY()*y.getY() + 4*y.getX()*p + pow(y.getY(),2) - 4 * pow(p,2));
    double distanceA = sqrt(pow((x.getX()-p),2)+ pow((x.getY()-q),2));
    double distanceB = sqrt(pow((y.getX()-p),2)+ pow((y.getY()-q),2));
    return distanceA*distanceB;
}


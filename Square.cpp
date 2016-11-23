//
// Created by agnie on 11/22/2016.
//

#include "Square.h"

Square::Square() {

}

Square::Square(Point &a, Point &b) : Rectangle(a, b) {
    x = a;
    y = b;
}

Square::Square(int p, int q, int r, int s) : Rectangle(p, q, r, s) {
    x = Point(p,q);
    y = Point(r,s);
}

double Square::getArea() {
    return Rectangle::getArea();
}

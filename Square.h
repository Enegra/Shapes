//
// Created by agnie on 11/22/2016.
//

#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H


#include "Rectangle.h"

class Square : Rectangle{
private:
public:
    Square();
    Square(Point &a, Point &b);
    Square(int p, int q, int r, int s);
    double getArea();
};


#endif //SHAPES_SQUARE_H

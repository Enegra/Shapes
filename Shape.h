//
// Created by agnie on 11/22/2016.
//

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H


#include "Point.h"

class Shape {
private:
protected:
    Point x;
    Point y;
    Point z;
public:
    Shape();
    Shape(Point &a, Point &b);
    Shape(Point &a, Point &b, Point &c);
    Point getX();
    Point getY();
    Point getZ();
    void setX(Point &a);
    void setY(Point &b);
    void setZ(Point &c);
    void setX(double &p, double &q);
    void setY(double &p, double &q);
    void setZ(double &p, double &q);
    virtual double getArea();
    virtual double getVolume();
};


#endif //SHAPES_SHAPE_H

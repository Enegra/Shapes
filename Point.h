//
// Created by agnie on 11/22/2016.
//

#ifndef SHAPES_POINT_H
#define SHAPES_POINT_H


class Point {
private:
    double x;
    double y;
    double z;
public:
    Point();
    Point(double a, double b);
    Point(double a, double b, double c);
    double getX();
    double getY();
    double getZ();
    void setX(double &a);
    void setY(double &b);
    void setZ(double &c);

};


#endif //SHAPES_POINT_H

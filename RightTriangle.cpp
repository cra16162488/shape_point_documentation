#include "RightTriangle.h"

#include <iostream>

RightTriangle::RightTriangle(std::vector<Point*> points)
: Triangle(points)
{
    if (!isRightTriangle())
        throw std::runtime_error("Not a right triangle");
}

RightTriangle::RightTriangle(Point* p1, Point* p2, Point* p3)
: Triangle(p1, p2, p3)
{
    if (!isRightTriangle())
        throw std::runtime_error("Not a right triangle");
}

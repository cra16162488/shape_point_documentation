#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"
#include "Point.h"
#include <math.h>
#include <vector>

class RightTriangle : public Triangle
{
public:
    /**
     * @brief Construct a new Right Triangle object
     * 
     * @param points vector of points
     */
    RightTriangle(std::vector<Point*> points);
    /**
     * @brief Construct a new Right Triangle object
     * 
     * @param p1 bottom-left point
     * @param p2 bottom-right point
     * @param p3 top point
     */
    RightTriangle(Point* p1, Point* p2, Point* p3);
};

#endif // RIGHTTRIANGLE_H

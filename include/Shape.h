#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"
#include <vector>
#include <stdexcept>
#include <iostream>

class Shape 
{
public:
    /**
     * @brief Set the point at the given index
     * 
     * @param index index of the point
     * @param point pointer to the point
     */
    void   setPoint(int index, Point *point);
    /**
     * @brief Get the point at the given index
     * 
     * @param index index of the point
     * @return Point* pointer to the point
     */
    Point  *getPoint(int index);
    /**
     * @brief Get the number of points of the shape
     * 
     * @return int number of points
     */
    int    getPointCount();

    /**
     * @brief Get the area of the shape
     * 
     * @return float area
     */
    virtual float getArea()      = 0;
    /**
     * @brief Get the permimeter of the shape
     * 
     * @return float perimeter
     */
    float   getPerimeter();

protected:
    std::vector<Point*> m_points; ///< points of the shape
};

#endif // SHAPE_H

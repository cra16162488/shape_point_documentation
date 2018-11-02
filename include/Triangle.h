#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Point.h"
#include "Shape.h"

#include <math.h>
#include <vector>

#define PI 3.14159265

class Triangle : public Shape
{
public:
    /**
     * @brief Construct a new Triangle object
     * 
     * @param points points
     */
    Triangle(std::vector<Point*> points);
    /**
     * @brief Construct a new Triangle object
     * 
     * @param p1 bottom-left point
     * @param p2 bottom-right point
     * @param p3 top point
     */
    Triangle(Point* p1, Point* p2, Point* p3);

    /**
     * @brief Set the points of the shape
     * 
     * @param points points
     */
    void setPoints(std::vector<Point*> points);
    /**
     * @brief Set the points of the shape
     * 
     * @param p1 bottom-left point
     * @param p2 bottom-right point
     * @param p3 top point
     */
    void setPoints(Point* p1, Point* p2, Point* p3);
    /**
     * @brief Get the points of the shape
     * 
     * @return std::vector<Point*> points
     */
    std::vector<Point*> getPoints();

    /**
     * @brief determines if the triangle is a right triangle
     * 
     * @return true  the shape is a right triangle
     * @return false the shape is not a right triangle
     */
    bool isRightTriangle();

    /**
     * @brief Get the area of the shape
     * 
     * @return float area
     */
    float getArea();
};

#endif // TRIANGLE_H

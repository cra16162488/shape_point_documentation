#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Shape.h"
#include "Triangle.h"
#include <math.h>

class Quadrilateral : public Shape
{
public:
    /**
     * @brief Construct a new Quadrilateral object
     * 
     * @param points vector of points
     */
    Quadrilateral(std::vector<Point*> points);
    /**
     * @brief Construct a new Quadrilateral object
     * 
     * @param p1 top-left point
     * @param p2 bottom-left point
     * @param p3 bottom-right point
     * @param p4 top-right point
     */
    Quadrilateral(Point* p1, Point* p2, Point* p3, Point* p4);

    /**
     * @brief Set the points of the shape
     * 
     * @param points vector of points
     */
    void setPoints(std::vector<Point*> points);
    /**
     * @brief Set the points of the shape
     * 
     * @param p1 top-left point
     * @param p2 bottom-left point
     * @param p3 bottom-right point
     * @param p4 top-right point
     */
    void setPoints(Point* p1, Point* p2, Point* p3, Point* p4);
    /**
     * @brief Get the points of the quadrilateral
     * 
     * @return std::vector<Point*> points
     */
    std::vector<Point*> getPoints();

    /**
     * @brief determine if the quadrilateral is rectangle
     * 
     * @return true quadrilateral is a rectangle
     * @return false quadrilateral is not a rectangle
     */
    bool isRectangle();

    /**
     * @brief Get the area of the quadrilateral
     * 
     * @return float area
     */
    float getArea() const;
};

#endif // QUADRILATERAL_H

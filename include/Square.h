#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Rectangle.h"
#include "Point.h"
#include <vector>

class Square : public Rectangle
{
public:
  /**
     * @brief Construct a new Square object
     * 
     * @param points vector of 4 points
     */
  Square(std::vector<Point *> points);
  /**
     * @brief Construct a new Square object
     * 
     * @param p1 top-left point
     * @param p2 bottom-left point
     * @param p3 bottom-right point
     * @param p4 top-right point
     */
  Square(Point *p1, Point *p2, Point *p3, Point *p4);
};

#endif // SQUARE_H

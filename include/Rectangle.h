#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Quadrilateral.h"
#include "Triangle.h"
#include "Point.h"
#include <vector>

class Rectangle : public Quadrilateral
{
public:
  /**
   * @brief Construct a new Rectangle object
   *
   * @param points vector of points
   */
  Rectangle(std::vector<Point *> points);
  /**
   * @brief Construct a new Rectangle object
   *
   * @param p1 top-left point
   * @param p2 bottom-left point
   * @param p3 bottom-right point
   * @param p4 top-right point
   */
  Rectangle(Point *p1, Point *p2, Point *p3, Point *p4);

  /**
   * @brief determine if the rectangle is a square
   *
   * @return true the rectangle is a square
   * @return false the rectangle is not a square
   */
  bool isSquare();
};

#endif // RECTANGLE_H

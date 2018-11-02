#ifndef POINT_H
#define POINT_H

#include <math.h>

class Point
{
public:
    /**
     * @brief Construct a new Point object
     * 
     * @param x vertical position of the point
     * @param y horizontal position of the point
     */
    Point(float x, float y);

    /**
     * @brief Set the position of the point
     * 
     * @param x new vertical position
     * @param y new horizontal position
     */
    void setPosition(float x, float y);

    /**
     * @brief Get the distance between this point an another
     * 
     * @param point other point to determine the distance
     * @return float distance
     */
    float getDistance(Point* point) const;

    /**
     * @brief set the vertical position
     * 
     * @param x vertical position
     */
    void  setX(float x);
    /**
     * @brief set the horizontal position
     * 
     * @param y horizontal position
     */
    void  setY(float y);
    /**
     * @brief get vertical position
     * 
     * @return float vertical position
     */
    float getX();
    /**
     * @brief get horizontal position
     * 
     * @return float horizontal position
     */
    float getY();

private:
    float m_x; ///< x position
    float m_y; ///< y position
};

#endif // POINT_H

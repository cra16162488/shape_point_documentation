#ifndef POINT_H
#define POINT_H

#include <math.h>

class Point
{
public:
    /**
     * @brief Construct a new Point object
     * 
     * @param x horizontal coordinate of the point
     * @param y vertical coordinate of the point
     */
    Point(float x, float y);

    /**
     * @brief Set the position of the point
     * 
     * @param x new horizontal coordinate
     * @param y new vertical coordinate
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
     * @brief set the horizontal coordinate
     * 
     * @param x horizontal coordinate
     */
    void  setX(float x);
    /**
     * @brief set the vertical coordinate
     * 
     * @param y vertical coordinate
     */
    void  setY(float y);
    /**
     * @brief get horizontal coordinate
     * 
     * @return float horizontal coordinate
     */
    float getX();
    /**
     * @brief get vertical coordinate
     * 
     * @return float vertical coordinate
     */
    float getY();

private:
    float m_x; ///< x position
    float m_y; ///< y position
};

#endif // POINT_H

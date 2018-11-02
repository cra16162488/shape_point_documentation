#include "Rectangle.h"

Rectangle::Rectangle(std::vector<Point*> points)
: Quadrilateral(points)
{
    if (!isRectangle())
        throw std::runtime_error("Not a rectangle");
}

Rectangle::Rectangle(Point* p1, Point* p2, Point* p3, Point* p4)
: Quadrilateral(p1, p2, p3, p4)
{
    if (!isRectangle())
        throw std::runtime_error("Not a rectangle");
}

bool Rectangle::isSquare()
{
    float s1, s2, s3, s4;

    s1 = m_points[0]->getDistance(m_points[1]);
    s2 = m_points[1]->getDistance(m_points[2]);
    s3 = m_points[2]->getDistance(m_points[3]);
    s4 = m_points[3]->getDistance(m_points[0]);

    if (isRectangle() && s1 == s2 && s2 == s3 && s3 == s4)
        return true;
    return false;
}

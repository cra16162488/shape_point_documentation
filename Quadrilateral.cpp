#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(std::vector<Point*> points)
{
    m_points = points;
}

Quadrilateral::Quadrilateral(Point* p1, Point* p2, Point* p3, Point* p4)
{
    m_points.push_back(p1);
    m_points.push_back(p2);
    m_points.push_back(p3);
    m_points.push_back(p4);
}

void Quadrilateral::setPoints(std::vector<Point*> points)
{
    m_points = points;
}

void Quadrilateral::setPoints(Point* p1, Point* p2, Point* p3, Point* p4)
{
    m_points.push_back(p1);
    m_points.push_back(p2);
    m_points.push_back(p3);
    m_points.push_back(p4);
}

std::vector<Point*> Quadrilateral::getPoints()
{
    return m_points;
}

float Quadrilateral::getArea()
{
    // from: https://www.mathopenref.com/coordpolygonarea.html
    float area = 0;
    area += m_points[0]->getX() * m_points[1]->getY() - m_points[0]->getY() * m_points[1]->getX();
    area += m_points[1]->getX() * m_points[2]->getY() - m_points[1]->getY() * m_points[2]->getX();
    area += m_points[2]->getX() * m_points[3]->getY() - m_points[2]->getY() * m_points[3]->getX();
    area += m_points[3]->getX() * m_points[0]->getY() - m_points[3]->getY() * m_points[0]->getX();
    area = abs(area / 2);

    return area;
}

bool Quadrilateral::isRectangle()
{
    Triangle t1(m_points[0], m_points[1], m_points[2]);
    Triangle t2(m_points[1], m_points[2], m_points[3]);
    Triangle t3(m_points[2], m_points[3], m_points[0]);
    Triangle t4(m_points[3], m_points[0], m_points[1]);

    if (t1.isRightTriangle() && t2.isRightTriangle() &&
        t3.isRightTriangle() && t4.isRightTriangle())
        return true;
    
    return false;
}

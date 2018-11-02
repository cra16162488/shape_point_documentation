#include "Triangle.h"

Triangle::Triangle(std::vector<Point*> points)
{
    m_points = points;
}

Triangle::Triangle(Point* p1, Point* p2, Point* p3)
{
    m_points.push_back(p1);
    m_points.push_back(p2);
    m_points.push_back(p3);
}

void Triangle::setPoints(std::vector<Point*> points)
{
    m_points = points;
}

void Triangle::setPoints(Point* p1, Point* p2, Point* p3)
{
    m_points[0] = p1;
    m_points[1] = p2;
    m_points[2] = p3;
}

std::vector<Point*> Triangle::getPoints()
{
    return m_points;
}

float Triangle::getArea()
{
    float p = getPerimeter() / 2;

    float s1, s2, s3;

    s1 = m_points[0]->getDistance(m_points[2]);
    s2 = m_points[0]->getDistance(m_points[1]);
    s3 = m_points[1]->getDistance(m_points[2]);
    
    // from : https://www.mathopenref.com/heronsformula.html
    return sqrt(p * (p - s1) * (p - s2) * (p - s3));
}

bool Triangle::isRightTriangle()
{
    // Get sides (squared) length
    float s1, s2, s3;

    s1 = pow(m_points[0]->getY()-m_points[2]->getY(), 2) +
         pow(m_points[0]->getX()-m_points[2]->getX(), 2);
    s2 = pow(m_points[0]->getY()-m_points[1]->getY(), 2) +
         pow(m_points[0]->getX()-m_points[1]->getX(), 2);
    s3 = pow(m_points[1]->getY()-m_points[2]->getY(), 2) +
         pow(m_points[1]->getX()-m_points[2]->getX(), 2);

    // Use pythagore's theorem to determine if it is a right triangle
    if (s1 + s2 == s3 ||
        s1 + s3 == s2 ||
        s2 + s3 == s1)
        return true;

    return false;
}

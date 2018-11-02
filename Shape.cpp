#include "Shape.h"

void Shape::setPoint(int index, Point *point)
{
    try
    {
        m_points[index] = point;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

float Shape::getPerimeter()
{
    float perimeter = 0;

    for (int i = 0; i < m_points.size(); i++)
        perimeter += m_points[i]->getDistance(m_points[(i + 1) % m_points.size()]);

    return perimeter;
}

Point *Shape::getPoint(int index)
{
    return m_points[index];
}

int Shape::getPointCount()
{
    return m_points.size();
}

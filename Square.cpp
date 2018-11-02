#include "Square.h"

Square::Square(std::vector<Point*> points)
: Rectangle(points)
{
    if (!isSquare())
        throw std::runtime_error("Not a square");
}

Square::Square(Point* p1, Point* p2, Point* p3, Point* p4)
: Rectangle(p1, p2, p3, p4)
{
    if (!isSquare())
        throw std::runtime_error("Not a square");
}

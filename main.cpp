#include <iostream>

#include "Triangle.h"
#include "RightTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"

int main(){
    Point *p1 = new Point(0, 0);
    Point *p2 = new Point(4, 0);
    Point *p3 = new Point(4, 4);
    Point *p4 = new Point(0, 4);

    try
    {
        Triangle triangle(p2, p3, p1);
        std::cout << "Triangle area : "      << triangle.getArea()      << std::endl;
        std::cout << "Triangle perimeter : " << triangle.getPerimeter() << std::endl;
        std::cout << std::endl;

        RightTriangle rightTriangle(p1, p2, p3);
        std::cout << "Right triangle area : "      << rightTriangle.getArea()      << std::endl;
        std::cout << "Right triangle perimeter : " << rightTriangle.getPerimeter() << std::endl;
        std::cout << std::endl;

        Quadrilateral quadrilateral(p3, p2, p1, p4);
        std::cout << "Quadrilateral area : "      << quadrilateral.getArea()      << std::endl;
        std::cout << "Quadrilateral perimeter : " << quadrilateral.getPerimeter() << std::endl;
        std::cout << std::endl;

        Rectangle rectangle(p1, p2, p3, p4);
        std::cout << "Rectangle area : "      << rectangle.getArea()      << std::endl;
        std::cout << "Rectangle perimeter : " << rectangle.getPerimeter() << std::endl;
        std::cout << std::endl;

        Square square(p1, p2, p3, p4);
        std::cout << "Square area : "      << square.getArea()      << std::endl;
        std::cout << "Square perimeter : " << square.getPerimeter() << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
private:
    double a, b, c;

public:
    Shape(double p)
    {
        a = p;
        Area(a);
    }

    Shape(double p, double q)
    {
        a = p;
        b = q;
        Area(a, b);
    }

    Shape(double p, double q, double r)
    {
        a = p;
        b = q;
        c = r;
        Area(a, b, c);
    }

    double Area(double radius)
    {
        double area = 3.1416 * radius * radius;
        cout << "Area of the circle is " << area << " unit square" << endl;
    }

    double Area(double length, double width)
    {
        double area = length * width;
        cout << "Area of the rectangle is " << area << " unit square" << endl;
    }

    double Area(double side1, double side2, double side3)
    {
        double s = (side1 + side2 + side3) / 2;
        double area = sqrt(s * (s + side1) * (s + side2) * (s + side3));
        cout << "Area of the triangle is " << area << " unit square" << endl;
    }
};

int main()
{
    Shape circle(5);
    Shape rectangle(6, 7);
    Shape triangle(8, 9, 3);

    return 0;
}
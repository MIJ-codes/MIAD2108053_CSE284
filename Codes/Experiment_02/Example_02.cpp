#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double height;

public:
    Rectangle(double len, double hgt)
    {
        length = len;
        height = hgt;
    }

    double calculate_area()
    {
        return length * height;
    }
};

int main()
{
    Rectangle rect1(10.5, 8.6);
    Rectangle rect2(8.5, 6.3);

    cout << "Area of the rectangle 1: " << rect1.calculate_area() << endl;
    cout << "Area of the rectangle 2: " << rect2.calculate_area() << endl;

    return 0;
}
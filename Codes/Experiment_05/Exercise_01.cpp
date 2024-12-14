#include <iostream>
using namespace std;

// Base class: Area
class Area
{
public:
    int calculateArea(int length, int width)
    {
        return length * width;
    }
};

// Base class: Perimeter
class Perimeter
{
public:
    int calculatePerimeter(int length, int width)
    {
        return 2 * (length + width);
    }
};

// Derived class: Rectangle
class Rectangle : public Area, public Perimeter
{
private:
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void displayResults()
    {
        cout << "Area: " << calculateArea(length, width) << endl;
        cout << "Perimeter: " << calculatePerimeter(length, width) << endl;
    }
};

int main()
{
    Rectangle rect(5, 8); // Create a rectangle with length = 5 and width = 8
    rect.displayResults();

    return 0;
}

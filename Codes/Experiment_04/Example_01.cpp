#include <iostream>
using namespace std;

class Shape
{
protected: // Derived classes and functions can modify and use
    int width, height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape // Derived class
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    Rectangle rect;

    rect.setHeight(10);
    rect.setWidth(12);

    cout << "Total area: " << rect.getArea() << endl;

    return 0;
}
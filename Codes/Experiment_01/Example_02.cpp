#include <iostream>
using namespace std;

class Box
{
public:
    double length, breadth, height;

    void input_value()
    {
        cout << "Enter three sides of a box : " << endl;
        cin >> length >> breadth >> height;
    }

    void print_value()
    {
        cout << "Length : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Height : " << height << endl;
    }

    double volume()
    {
        double v = length * breadth * height;
        return v;
    }
};

int main()
{
    Box mybox;

    mybox.input_value();
    mybox.print_value();
    double vol = mybox.volume();

    cout << "Volume of the box : " << vol << endl;
}
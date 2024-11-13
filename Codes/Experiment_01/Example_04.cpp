#include <iostream>
using namespace std;
class BOX
{
    private:
        double length;
        double breadth;
        double height;

    public:
    // function to initialize private variables
    void initData (double len, double brth, double hgt)
    {
        length = len;
        breadth = brth;
        height = hgt;
    }
    double calculateArea ()
    {
        return length * breadth;
    }
    double calculateVolume ()
    {
        return length * breadth * height;
    }
};
int main ()
{
    // create object of BOX class
    BOX box1;
    // pass the values of private variables as arguments
    box1 . initData (42.5, 30.8, 19.2);
    cout << "Area of BOX = " << box1 . calculateArea () << endl;
    cout << "Volume of BOX = " << box1 . calculateVolume () << endl;
    return 0;
}
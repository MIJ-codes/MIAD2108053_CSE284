#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length,  width;
    public:
        void setdata ()
        {
            cout << "Enter length = " << endl;
            cin >> length;
            cout << "Enter width = " << endl;
            cin >> width;
        }

        int area ()
        {
            int a = length * width;
            return a;
        }

        int perimeter ()
        {
            int p = 2 * (length + width);
            return p;
        }
};

int main ()
{
    Rectangle r;

    r . setdata ();

    int Area = r . area ();
    cout << "Area = " << Area << endl;

    int Perimeter = r . perimeter ();
    cout << "Perimeter = " << Perimeter << endl;

    return 0;
}
#include <iostream>
using namespace std;
class Square
{
private:
    int side;               // normal data member
    static int objectCount; // static data member
public:
    // Constructor definition
    Square()
    {
        // Increase every time object is created
        objectCount++;
    }
    // creating a static function that returns static data member
    static int getCount()
    {
        return objectCount;
    }
};
// Initialize static member of class Square
int Square::objectCount = 0;
int main()
{
    Square s1;
    // Object Count.
    cout << "Total objects: " << Square::getCount() << endl;
    Square s2;
    // Object Count.
    cout << "Total objects: " << Square::getCount() << endl;
    return 0;
}
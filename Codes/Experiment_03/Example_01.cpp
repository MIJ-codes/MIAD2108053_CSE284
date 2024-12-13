#include <iostream>
using namespace std;

class Square
{
private:
    int side;

public:
    static int objectCount;
    // A static data member is a variable that is used by all the objects created.
    // When an object is created for this object different variables are also created as defined in the class structure.
    // But if a variable is static then that variable is created for all the upcoming objects.
    // It is more like a shared variable for all the objects.
    Square()
    {
        objectCount++;
    }
};

int Square::objectCount = 0;
// We tried to initialize the variable outside of the class structure.
// To do this we have to define where in the code the variable is.
// Normally the variables are in "std" class but in this case it's in a new class called Square.
// That's why we have to define the scope of the variable by using "::" (scope resolution operator)

int main()
{
    Square s1;
    cout << "Total objects: " << Square::objectCount << endl;
    Square s2;
    cout << "Total objects: " << Square::objectCount << endl;
    return 0;
}
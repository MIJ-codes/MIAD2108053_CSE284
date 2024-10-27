#include <iostream>
using namespace std;

class Square
{
private:
    int side;

public:
    static int objectCount;
    Square()
    {
        objectCount++;
    }
};

int Square::objectCount = 0;

int main()
{
    Square s1;
    cout << "Total objects: " << Square::objectCount << endl;
    Square s2;
    cout << "Total objects: " << Square::objectCount << endl;
    return 0;
}
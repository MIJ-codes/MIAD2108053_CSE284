#include <iostream>
using namespace std;

class A // base class 1
{
public:
    int x;
    void getx()
    {
        cout << "Enter value of x: ";
        cin >> x;
    }
};

class B // base class 2
{
public:
    int y;
    void gety()
    {
        cout << "Enter value of y: ";
        cin >> y;
    }
};

class C : public A, public B // C is derived from class A and class B
{
public:
    void sum()
    {
        cout << "Sum = " << x + y;
    }
};

int main()
{
    C obj1; // object of derived class C
    
    obj1.getx();
    obj1.gety();
    obj1.sum();
    
    return 0;
}
#include <iostream>
using namespace std;

// forward declaration
class Class2;

class Class1
{
private:
    int num1;

public:
    // constructor to initialize num1 to 15
    Class1()
    {
        num1 = 15;
    }
    // friend function declaration
    friend int add(Class1, Class2);
};

class Class2
{
private:
    int num2;

public:
    // constructor to initialize num2 to 1
    Class2()
    {
        num2 = 1;
    }
    // friend function declaration
    friend int add(Class1, Class2);
};

// access members of both classes
int add(Class1 object1, Class2 object2)
{
    return (object1.num1 + object2.num2);
}

int main()
{
    Class1 object1;
    Class2 object2;
    cout << "Sum: " << add(object1, object2);
    
    return 0;
}
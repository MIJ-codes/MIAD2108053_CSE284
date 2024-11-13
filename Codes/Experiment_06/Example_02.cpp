#include <iostream>
using namespace std;

class Class2;

class Class1
{
    private:
        int num1;

    public:
        Class1 ()
        {
            num1 = 15;
        }

        friend int add (Class1, Class2);
};

class Class2
{
    private:
        int num2;

    public:
        Class2 ()
        {
            num2 = 1;
        }

        friend int add (Class1, Class2);
};

int add (Class1 object1, Class2 object2)
{
    return (object1.num1 + object2.num2);
}

int main ()
{
    Class1 object1;
    Class2 object2;
    cout << "Sum: " << add (object1, object2);
    return 0;
}
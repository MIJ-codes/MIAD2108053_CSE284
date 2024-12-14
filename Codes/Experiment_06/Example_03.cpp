#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA
{
private:
    int numA;
    // friend class declaration
    friend class ClassB;

public:
    // constructor to initialize numA to 12
    ClassA()
    {
        numA = 16;
    }
};

class ClassB
{
private:
    int numB;

public:
    // constructor to initialize numB to 1
    ClassB()
    {
        numB = 4;
    }
    
    // member function to add numA
    // from ClassA and numB from ClassB
    int add()
    {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main()
{
    ClassB objectB;
    cout << "Sum: " << objectB.add();

    return 0;
}

/*Friend Class
A friend class is a class whose methods can access the private and protected members 
of another class. If you make a class a friend of another class, 
all member functions of the friend class can access the private members of the class 
where the friend is declared.*/
#include <iostream>
using namespace std;

class Number
{
protected:
    int a, b;

public:
    void setdata (int num1, int num2)
    {
        a = num1;
        b = num2;
    }
};

class Sum : public Number
{
public:
    int summation ()
    {
        return a + b;
    }
};

int main ()
{
    Sum set1;
    set1.setdata (1, 2);
    cout << "The sum of two numbers: " << set1.summation() << endl;

    return 0;
}

/*Mistakes in the Code
Accessing summation from the wrong object

Mistake: In the main function, you're trying to access set1.summation(). However:
summation is a member of the Sum class, not the Number class.
set1 is an object of the Number class, which does not have a summation member or function.
Fix: Use a Sum object to access summation.
summation initialization

Mistake: In the Sum class, the summation member is initialized as a + b. However:
a and b are members of the parent class Number, but their values are not yet set when summation is initialized.
This results in undefined behavior.
Fix: Move the calculation of the sum into a function that computes the sum after a and b are set.
Access specifiers

Mistake: The a and b members of the Number class are protected. While they are accessible in the Sum class, you cannot access them directly in summation during member initialization.
Fix: Use a method to compute the sum instead of initializing summation directly.
Calling summation as a function

Mistake: You're trying to call summation as a function (set1.summation()), but it is defined as an integer variable.
Fix: Make summation a function to compute and return the sum.
*/

#include <iostream>
using namespace std;

class Count
{
private:
    int value;
public:
    Count ()
    {
        value = 8;
    }

    void operator ++ ()
    {
        ++value;
    }

    void operator ++ (int) //we differentiate between function overloading by the input argument. if we dont put any parameter  in this function then there will be no way to differentiate between prefix and postfix. to solve this problem we put a dummy argument (only data type is given but no variable is given) in this way the compiler differentiates between prefix and postfix.
    {
        value++;
    }

    void display ()
    {
        cout << "Count: " << value << endl;
    }
};

int main ()
{
    Count c1;

    c1++; //c1 is an object so it cant increase the value the of an object so when it will encounter the next ++ operator it will go to the class to search what to do when it encounters an object and then operator
    c1.display();

    ++c1;
    c1.display();
    
    return 0;
}

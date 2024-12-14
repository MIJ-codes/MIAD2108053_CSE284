#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;
public:
    Complex ()
    {
        real = 0;
        imag = 0;
    }

    void input ()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    Complex /*the complex was written because the return value is a object whose type is complex*/ operator + (Complex c)
    {
        //operator is a key word that is needed for operator overloading
        Complex temp;
        temp . real = real + c . real;
        temp . imag = imag + c . imag;
        return temp;
    }
    
    void output ()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << "-" << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main ()
{
    Complex c1, c2, result;

    cout << "Enter first complex number: \n";
    c1.input();

    cout << "Enter second complex number: \n";
    c2.input();

    result = c1 + c2; // this line is equivalent as c1.add(c2) //temp was returned and was assigned to result
    result.output();
}

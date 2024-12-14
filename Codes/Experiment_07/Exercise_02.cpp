#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex() : real(0), imag(0) {}

    // Constructor to initialize with user-defined values
    Complex(float r, float i) : real(r), imag(i) {}

    // Function to input values for real and imaginary parts
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Overloaded '-' operator to subtract two complex numbers
    Complex operator - (Complex c)
    {
        Complex temp;
        
        temp.real = real - c.real;  // Subtract real parts
        temp.imag = imag - c.imag;  // Subtract imaginary parts
        
        return temp;  // Return the resulting complex number
    }

    // Function to output complex number in a + bi format
    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << " - " << -imag << "i" << endl;
        else
            cout << "Output Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, result;

    // Input two complex numbers
    cout << "Enter first complex number: " << endl;
    c1.input();

    cout << "Enter second complex number: " << endl;
    c2.input();

    // Subtract the complex numbers using overloaded '-' operator
    result = c1 - c2;

    // Output the result
    cout << "Result of subtraction: ";
    result.output();

    return 0;
}

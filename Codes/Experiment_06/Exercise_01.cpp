#include <iostream>
using namespace std;

class Number
{
private:
    int number_value;

public:
    Number(int input)
    {
        number_value = input;
    }

    friend int reverse_number(Number);
};

int reverse_number(Number num1)
{
    int reverse_result = 0;
    while (num1.number_value % 10 > 0)
    {
        reverse_result = reverse_result * 10 + num1.number_value % 10;
        num1.number_value = num1.number_value / 10;
    }

    return reverse_result;
}

int main()
{
    int input_num;
    cout << "Enter the number: ";
    cin >> input_num;

    Number value(input_num);
    cout << "Reversed number: " << reverse_number(value) << endl;

    return 0;
}
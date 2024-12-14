#include <iostream>
using namespace std;

// Class declaration
class DivisibleBy11
{
private:
    int sum;   // To store the sum of numbers divisible by 11
    int count; // To store the count of numbers divisible by 11

public:
    // Constructor to initialize sum and count
    DivisibleBy11()
    {
        sum = 0;
        count = 0;
    }

    // Friend function declaration
    friend void calculate(DivisibleBy11);
};

// Friend function definition
void calculate(DivisibleBy11 d)
{
    for (int i = 100; i <= 200; i++)
    {
        if (i % 11 == 0)
        {                      // Check if the number is divisible by 11
            d.count++;         // Increment count
            d.sum += i;        // Add to sum
            cout << i << ", "; // Print the number
        }
    }
    cout << "\nTotal numbers divisible by 11: " << d.count << endl;
    cout << "Sum of numbers divisible by 11: " << d.sum << endl;
}

int main()
{
    DivisibleBy11 d; // Create object of DivisibleBy11 class

    cout << "Numbers between 100 and 200 divisible by 11 are: \n";
    calculate(d); // Call the friend function to calculate and print results

    return 0;
}

#include <iostream>
using namespace std;

// Class declaration
class PrimeSumCheck
{
private:
    int number; // Number to check

public:
    // Constructor to initialize the number
    PrimeSumCheck(int num)
    {
        number = num;
    }

    // Friend function declaration
    friend bool checkPrimeSum(PrimeSumCheck);

    // Function to check if a number is prime
    bool isPrime(int num)
    {
        if (num <= 1)
            return false; // Numbers less than or equal to 1 are not prime
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

// Friend function definition to check if number can be expressed as sum of two primes
bool checkPrimeSum(PrimeSumCheck p)
{
    for (int i = 2; i <= p.number / 2; i++) // started from 2 because prime number starts from 2 and we are trying to find the prime numbers in the input number
    {
        if (p.isPrime(i) && p.isPrime(p.number - i))
        {
            cout << p.number << " can be expressed as the sum of two prime numbers: " << i << " + " << p.number - i << endl;
            return true; // Found two prime numbers whose sum is the number
        }
    }
    cout << p.number << " cannot be expressed as the sum of two prime numbers." << endl;
    return false;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    PrimeSumCheck p(num); // Create object with the given number
    checkPrimeSum(p);     // Check if the number can be expressed as the sum of two prime numbers

    return 0;
}

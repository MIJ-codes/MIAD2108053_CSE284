#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor to initialize feet and inches to zero
    Distance() : feet(0), inches(0) {}

    // Constructor to initialize feet and inches with given values
    Distance(int ft, int in) : feet(ft), inches(in) {}

    // Print function to display the distance
    void print()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Overloading '<' operator to compare two distances
    bool operator<(Distance d)
    {
        // First, compare feet
        if (feet < d.feet)
        {
            return true;
        }

        else if (feet == d.feet)
        {
            // If feet are the same, compare inches
            if (inches < d.inches)
            {
                return true;
            }
            
            return false;
        }
    }

    // Friend function to overload '+' operator for adding two distances
    friend Distance operator+(Distance d1, Distance d2);
};

// Overload '+' operator using a friend function
Distance operator+(Distance d1, Distance d2)
{
    int totalInches = d1.inches + d2.inches;
    int totalFeet = d1.feet + d2.feet;

    // Convert inches to feet if more than 12 inches
    if (totalInches >= 12)
    {
        totalInches -= 12;
        totalFeet++;
    }

    return Distance(totalFeet, totalInches);
}

int main()
{
    Distance d1(5, 10); // 5 feet 10 inches
    Distance d2(3, 8);  // 3 feet 8 inches

    cout << "First Distance: ";
    d1.print();

    cout << "Second Distance: ";
    d2.print();

    // Comparing two distances
    if (d1 < d2)
        cout << "First distance is smaller than the second distance." << endl;
    else
        cout << "First distance is greater than or equal to the second distance." << endl;

    // Adding two distances using overloaded + operator
    Distance d3 = d1 + d2;

    cout << "Sum of the distances: ";
    d3.print();

    return 0;
}

#include <iostream>
#include <list>
using namespace std;

class Subjects
{
protected:
    list<float> numbers; // List to store marks

public:
    void inputMarks()
    {
        cout << "Enter 5 marks: ";
        for (float i = 0; i < 5; i++)
        {
            float mark;
            cin >> mark;
            numbers.push_back(mark);
        }
    }
};

class Marks : public Subjects
{
protected:
    float totalMarks; // Store total marks

public:
    void calculatetotalMarks()
    {
        totalMarks = 0;
        for (float mark : numbers) // Iterate over the list
        {
            totalMarks += mark; // Add each mark to totalMarks
        }
        cout << "Total Marks: " << totalMarks << endl;
    }
};

class Percentage : public Marks
{
private:
    float totalPercent; // Store percentage

public:
    void calculatePercentage()
    {
        totalPercent = 0;
        totalPercent = (totalMarks / 500) * 100; // Calculate percentage
        cout << "Percentage: " << totalPercent << "%" << endl;
    }
};

int main()
{
    Percentage student1;            // Use Percentage object to access all methods
    student1.inputMarks();          // Input marks
    student1.calculatetotalMarks(); // Calculate total marks
    student1.calculatePercentage(); // Calculate percentage

    return 0;
}

/*Mistakes and Fixes
Line 9: inputMarks() logic issue
Mistake:
cpp
Copy code
for (float i = 0; i < 5; i++) {
    numbers.push_back(i);
}
Issue: This adds sequential numbers (0–4) to numbers, not actual user-entered marks.
Fix: Prompt the user to input marks.
cpp
Copy code
cout << "Enter 5 marks: ";
for (float i = 0; i < 5; i++) {
    float mark;
    cin >> mark;
    numbers.push_back(mark);
}
Reason: Marks should be entered by the user rather than being hardcoded.
Line 20: Incorrect indexing of list<float>
Mistake:
cpp
Copy code
totalMarks = totalMarks + numbers[i];
Issue: You attempted to use numbers[i], but list does not support indexing like arrays or vectors.
Fix: Use an iterator or range-based for loop to access the elements of the list.
cpp
Copy code
for (float mark : numbers) {
    totalMarks += mark;
}
Reason: list is not indexable; instead, you must iterate through its elements.
Line 31: floateger division issue in percentage calculation
Mistake:
cpp
Copy code
totalPercent = (totalMarks / 500) * 100;
Issue: floateger division results in truncation, causing incorrect percentage calculations.
Fix: Cast totalMarks to float to ensure floating-pofloat division.
cpp
Copy code
totalPercent = (static_cast<float>(totalMarks) / 500) * 100;
Reason: Proper percentage calculations require floating-pofloat arithmetic.
Line 42: Incorrect object instantiation
Mistake:
cpp
Copy code
Subjects student1;
student1.inputMarks();
student1.totalMarks();
student1.calculatePercentage();
Issue: You created an object of the Subjects class but tried to call methods (totalMarks() and calculatePercentage()) that belong to the derived classes (Marks and Percentage).
Fix: Create an object of the most derived class (Percentage), which has access to all inherited and class-specific methods.
cpp
Copy code
Percentage student1;
student1.inputMarks();
student1.calculatetotalMarks();
student1.calculatePercentage();
Reason: Only the Percentage class contains all necessary methods.
*/

#include <iostream>
using namespace std;

class Student
{
private:
    static int counter; // Tracks the number of students created
    int studentid;      // Unique ID for each student

public:
    Student()
    {
        studentid = counter; // Assign a unique ID to each student
        counter++;           // Increment the counter
    }

    void print() const
    {
        cout << "Student ID: " << studentid << endl;
    }
};

// Initialize static member
int Student::counter = 100;

int main()
{
    // Creating 5 student objects
    Student s1, s2, s3, s4, s5;

    // Print each student's ID
    s1.print();
    s2.print();
    s3.print();
    s4.print();
    s5.print();

    return 0;
}

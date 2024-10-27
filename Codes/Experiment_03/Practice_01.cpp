#include <iostream>
using namespace std;

class Student
{
private:
    static int a, b;
    static int studentid;

public:
    void print(int x, int y, int z) const
    {
        a = x;
        b = y;
        studentid = z;
        cout << a << endl;
        cout << b << endl;
        cout << "Student ID: " << studentid << endl;
    }
    Student()
    {
        studentid++;
    }

    void print(a, b, studentid);
};

int Student ::studentid = 100;

int main()
{
    Student s1;
    cout << "Student ID " << Student::studentid << endl;
    Student s2;
    cout << "Student ID " << Student::studentid << endl;
    Student s3;
    cout << "Student ID " << Student::studentid << endl;
    Student s4;
    cout << "Student ID " << Student::studentid << endl;
    Student s5;
    cout << "Student ID " << Student::studentid << endl;
}
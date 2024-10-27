#include <iostream>
using namespace std;

void print(int var)
{
    cout << "Integer number:" << var << endl;
}
void print(int var)
{
    cout << "Float number:" << var << endl;
}
void print(int var1, float var2)
{
    cout << "Integer number:" << var1 << endl;
    cout << "and Float number:" << var2 << endl;
}

void print(float var1, int var2)
{
    cout << "Float number:" << var1 << endl;
    cout << "and Integer number:" << var2 << endl;
}

void print(int var1, int var2)
{
    cout << "Integer number:" << var1 << endl;
    cout << "and Integer number:" << var2 << endl;
}

void print(float var1, float var2)
{
    cout << "Float number:" << var1 << endl;
    cout << "and Float number:" << var2 << endl;
}

int main()
{
    int a = 3;
    float b = 3.5;

    print(a);
    print(b);
    print(a, b);
    return 0;
}
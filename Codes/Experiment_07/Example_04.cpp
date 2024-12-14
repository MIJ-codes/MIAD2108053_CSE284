#include <iostream>
using namespace std;

class PrePost
{
    int a;

public:
    // constructor to initialize a
    PrePost()
    {
        a = 0;
    }

    void show()
    {
        cout << a << endl;
    }

    // friend functions
    friend PrePost operator++(PrePost x);
    friend PrePost operator++(PrePost x, int);
};

PrePost operator++(PrePost x)
{
    PrePost z;
    cout << "Prefix " << endl;
    z.a = ++x.a;
    return z;
}

PrePost operator++(PrePost x, int v)
{
    PrePost z;
    cout << "Postfix " << endl;
    z.a = x.a++;
    return z;
}

int main()
{
    PrePost p, x;

    x.show();
    p.show();

    x = ++p;

    x.show();
    p.show();

    x = p++;

    x.show();
    p.show();

    return 0;
}
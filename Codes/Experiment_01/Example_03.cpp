#include <iostream>
using namespace std;

class myTest
{
    private:
        int a, b, c;
    public:
        void access_private ()
        {
            cout << "a, b, c : " << endl;
            cin >> a >> b >> c;
            cout << a << b << c;
        }
};

int main ()
{
    myTest t;
    //cin >> t.a >> t.b >> t.c >> t.d; inaccessible because a b c are private members
    t . access_private ();

    return 0;
}
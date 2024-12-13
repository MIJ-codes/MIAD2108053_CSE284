#include <iostream>
using namespace std;

class AddMoney
{
private:
    int amount;

public:
    AddMoney() // don't put identifiers in this. because it is not a function but a cnstructor and constructors don't use identifiers
    {
        amount = 500;
        cout << "The final amount is " << amount << endl;
    }

    AddMoney(int new_amount)
    {
        amount = 500;
        amount = amount + new_amount;
        cout << "The final amount is " << amount << endl;
    }
};

int main()
{
    AddMoney account1; // To make this without parameters we dont have to use () and keep it blank. just create a normal object and it will be like a object without parameters.
    AddMoney account2(500);
}
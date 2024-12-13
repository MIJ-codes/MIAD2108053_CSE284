#include <iostream>
using namespace std;

class Square
{
private:
    int side;
    static int objectCount;

public:
    Square()
    {
        objectCount++;
    }

    static int getCount()
    {
        return objectCount;
    }
};

int Square::objectCount = 0;
/*Understanding Static Data Members
What Does private Mean?
A private member in a class means that direct access to the member is restricted to:
The class itself.
Its member functions.
Direct access from outside the class is prohibited.

What Does static Mean?
A static data member is shared by all objects of the class, rather than belonging to individual objects.
It exists independently of any object.
Because of this, it must be declared in the class but defined and optionally initialized outside of it.

Why Static Members Must Be Defined Outside the Class
A static member is shared by all instances, and it exists in a single memory location (not in each object). When you declare static int objectCount; inside the class:

You tell the compiler that such a member exists.
However, you don’t allocate memory for it yet.
The definition outside the class, like this:

cpp
Copy code
int Square::objectCount = 0;
Allocates memory for the static member.
Optionally initializes it (in this case, to 0).
This step is mandatory because static members live in a different memory region (class scope) compared to instance-specific data.

How Private Access is Enforced
Even though the static member is defined and initialized outside the class, the private access modifier is still respected. Here's why:

Private Access Control:

Even when the static member is defined outside, it is still a part of the class.
It cannot be accessed directly (read or modified) outside the class unless through the class's public member functions or a static member function.
Initialization vs. Access:

The line int Square::objectCount = 0; is not accessing the variable.
Instead, it is defining and initializing the static member, which is a special requirement for static variables in C++.
What Happens If You Try to Access it Directly?
If you try to access Square::objectCount directly outside the class, like this:

cpp
Copy code
cout << Square::objectCount; // Error: objectCount is private
The compiler will throw an access control error, because objectCount is private.

How Can It Be Accessed Properly?
The only way to access objectCount is through a public member function of the class, like the static function Square::getCount():

cpp
Copy code
static int getCount()
{
    return objectCount; // Accessing the private static member
}
Here, the class allows controlled access to its private static member.

In Summary
Static member initialization outside the class is a special rule in C++.
Defining and initializing a private static member outside the class does not violate the private access rule because:
This step is about memory allocation and initialization, not accessing or modifying it.
Access to the static member remains controlled by the class through its member functions.
The private access control is still enforced. Attempts to directly access objectCount outside the class will result in a compilation error.*/

int main()
{
    Square s1;
    cout << "Total objects: " << Square::getCount() << endl;
    Square s2;
    cout << "Total objects: " << Square::getCount() << endl;

    return 0;
}

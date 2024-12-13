#include <iostream>
#include <list>
using namespace std;

class Batsman
{
private:
    int batsman_ID;             // Unique ID for each batsman
    static int member_count;    // Tracks the total number of batsman objects
    static int id_upadater;     // Generates unique IDs starting from 1804000

public:
    Batsman()
    {
        id_upadater++;            // Increment ID for the next batsman
        batsman_ID = id_upadater; // Assign a unique ID
        member_count++;           // Increment the object count
    }

    static int get_count()
    {
        return member_count;      // Return the total number of batsmen
    }

    void showname()
    {
        cout << "Batsman ID: " << batsman_ID << endl;
    }
};

// Initialize static members
int Batsman::member_count = 0;
int Batsman::id_upadater = 1804000;

int main()
{
    int objects = 0;
    string name;
    list<Batsman> object_name; // List to store Batsman objects

    cout << "Initial number of objects: " << Batsman::get_count() << endl;

    cout << "Enter number of entries: ";
    cin >> objects;

    for (int i = 0; i < objects; i++)
    {
        cout << "Enter Batsman Name: ";
        cin >> name;
        Batsman name;           // Create a new Batsman object
        object_name.push_back(name); // Add the object to the list
    }

    cout << "Finally the number of objects: " << Batsman::get_count() << endl;

    // Display details of each batsman
    for (Batsman a : object_name)
    {
        a.showname();
    }

    return 0;
}

/*Mistakes in Your Code
Line: 
static list<string> object_name;
Mistake: 
You declared object_name as a list<string>, but you intended to store Batsman objects.
Fix: 
Changed the type to list<Batsman> to store Batsman objects.
Change:
static list<Batsman> object_name;

Line: 
Batsman name;
Mistake: 
Variable name conflict. You used name both as a string for input and as a Batsman object.
Fix: 
Renamed the Batsman object to batsman to avoid the conflict.
Change:
Batsman batsman;

Line: 
object_name.push_back {name};
Mistake:
Wrong syntax for push_back: used {} instead of ().
Wrong data type: Attempted to store a string or mismatched object in object_name.
Fix:
Corrected syntax to object_name.push_back(batsman);.
Ensured batsman is of type Batsman.
Change:
object_name.push_back(batsman);

Line: 
cout << "Batsman ID: " << a.showname() << endl;
Mistake: 
Iterated over a list<string> but attempted to call showname(), a member function of the Batsman class.
Fix: 
Updated the type of the list to list<Batsman> and iterated over Batsman objects.
Change:
for (const Batsman& a : object_name)
{
    a.showname();
}

Line: 
int Batsman::id_upadater = 1804000;
Mistake: 
Static variable id_upadater was declared but not incremented in the constructor.
Fix: Incremented id_upadater in the constructor to ensure unique IDs.
Change:
id_upadater++;
*/


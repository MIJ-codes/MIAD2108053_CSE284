#include <iostream>
using namespace std;

class Cars
{
private:
    string car_name, model_name, fuel_type;
    float mileage;
    double price;

public:
    Cars()
    {
        cout << "Default constructor has been called." << endl;
    }

    Cars(string cname, string mname, string ftype, float mile, double cost)
    {
        cout << "Parameterized constructor has been called." << endl;
        car_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = mile;
        price = cost;
        displaydata();
    }

    void displaydata()
    {
        cout << "Car Name: " << car_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
    }

    ~Cars()
    {
        cout << "Destructor has been called." << endl;
    }
};

int main()
{
    Cars car1;
    Cars car2("Toyota", "Supra", "Diesel", 100, 500000);

    return 0;
}
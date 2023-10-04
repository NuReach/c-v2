#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string mdoel;
    int year;
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    Car carObj1;
    carObj1.brand = "Lexus";
    carObj1.mdoel = "450h";
    carObj1.year = 2021;
    carObj1.speed(200);

    // Car carObj2;
    // carObj2.brand = "Ford";
    // carObj2.mdoel = "Reptor";
    // carObj2.year = 2021;

    // Car carObj3;
    // carObj3.brand = "Ford";
    // carObj3.mdoel = "Reptor";
    // carObj3.year = 2022;

    // cout << carObj1.brand << " " << carObj1.mdoel << " " << carObj1.year << "\n";
    // cout << carObj2.brand << " " << carObj2.mdoel << " " << carObj2.year << "\n";
    // cout << carObj3.brand << " " << carObj3.mdoel << " " << carObj3.year << "\n";
    return 0;
}
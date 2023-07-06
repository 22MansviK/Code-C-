#include<iostream>
using namespace std;

class Car
{
    int mileage;
};

int main()
{
    Car car1;

    cout << sizeof(car1) << endl;

    return 0;

}
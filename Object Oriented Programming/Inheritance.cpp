#include<iostream>
using namespace std;

class Human
{
    private:
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }

};

class Male : public Human
{
    public:
    string colour;


};

int main()
{
    Male object1;

    cout<< object1.age << endl;
}
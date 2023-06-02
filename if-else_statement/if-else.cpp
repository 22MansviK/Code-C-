#include <iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;

    if(age>=18)
    {
        cout<<"You can Vote";
    }
    else
    {
        cout<<"Not eligible for voting";
    }

    return 0;
}
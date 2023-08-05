#include<iostream>
using namespace std;

void func()
{
    cout<<".";
    func();
}

int main()
{
    func();
    return 0;
}
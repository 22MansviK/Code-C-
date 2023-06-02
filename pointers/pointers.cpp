#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout<<*p<<" "<<p;
    int b = 20;
    *p = b;
    cout<<p+1<<" "<<*(p+1);
    return 0;
}
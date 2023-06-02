#include<iostream>
using namespace std;

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    char *s;
    s = (char*)p;
    cout<<s<<" "<<*s;

    return 0;
}
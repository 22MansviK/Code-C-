#include<iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    p = new int;
    *p = 10;
    delete p;
    p = new int[20];
    delete[] p;
}
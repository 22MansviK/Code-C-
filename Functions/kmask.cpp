#include<iostream>
using namespace std;

int main()
{
    int k = 2;
    int mask = 1;
    mask = mask<<k;
    cout << mask<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int c[3][2][2] = {{{2,5}, {7,9}}, {{3,4}, {6,1}}, {{0,8}, {11,13}}};
    cout<<*(c[0][0]+1);
    return 0;

}
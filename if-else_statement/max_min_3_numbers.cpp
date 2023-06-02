#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    if (num1>num2)
    {
        /* code */
        if(num1>num3)
        {
            cout<<"Maximum no is "<<num1;
        }
        else{
            cout<<"Maximum no is "<<num3;
        }
    }
    else
    {
        if(num2>num3)
        {
            cout<<"Maximum no is "<<num2;
        }
        else
        {
             cout<<"Maximum no is "<<num3;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cin>>num1>>num2;
    
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1/num2<<endl;
        break;

        default:
        cout<<"Operator not found!"<<endl;
        break;

    }
    return 0;

}
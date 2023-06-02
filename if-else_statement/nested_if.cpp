#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x==y)
    {
        cout<<"Both numbers are equal";
    }
    else
    {
        if(x>y)
        {
            cout<<"x is greater than y";
        }
        else
        {
            cout<<"Y is greater than X";
        }
        

    }

    return 0;
}
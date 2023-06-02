#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int n;
        for(n=2; n<i; i++)
        {
            if(i%n==0)
            {
                break;
            }
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }
    float u = 243/10;
    cout<<u;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int df[n+1];
    df[0] = 0;
    df[1] = 1;
    for(int i=2; i<=n; i++)
    {
        df[i] = df[i-1] + df[i-2];
    }
    cout<< df[n] << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int f(int n,vector<int> &df)
{
    if(n==1 || n==0)
    {
        return n;
    }
    if(df[n] != -1)
    {
        return df[n];
    }

    df[n] = f(n-1,df) + f(n-2,df);
    return df[n];
}

int main()
{
    int n;
    cin>>n;

    vector<int> df(n+1);
    for(int i=0; i<=n; i++)
    {
        df[i] = -1;
    }
    cout<< f(n,df)<<endl;
    return 0;
}
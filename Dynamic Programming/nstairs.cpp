#include<iostream>
using namespace std;

int solve (long long nStairs, int i)
{
    if(i == nStairs)
    {
        return 1;
    }
    if(i > nStairs)
    {
        return 0;
    }
    return (solve(nStairs, i+1) + (nStairs, i+2));
}

int main()
{
    long long nStairs;cin>>nStairs;
    int ans = solve(nStairs, 0);
    cout<< ans<< endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int solveMem(int n, vector<int> &dp)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    int ans = 0;
    int mini = INT8_MAX;
    for(int i=1; i<=sqrt(n); i++)
    {
        ans += solveMem(n-i*i, dp);
    }
    mini = min(ans, INT8_MAX);
    dp[n] = mini;
    return dp[n];
    
}

int solve(int n)
{
    if(n == 0)
    {
        return 0;
    }
    
    int ans = n;
    
    for(int i=1; i*i<=n; i++)
    {
        ans = min(ans,1+solve(n-i*i));
    }
    
    
    return ans;
    
}

int main()
{
    int n = 100;
    
    vector<int> dp(n+1, -1);
    cout<<solve(n);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& values, int i, int j)
{
    if(i+1 == j)
    {
        return 0;
    }
    int ans = INT8_MAX;
    for(int k=i+1; k<j; k++ )
    {
        ans = min(ans, values[i]*values[k]*values[j] + solve(values,i,k) + solve(values,k,j));
    }
    return ans;
}

int solveMem(vector<int>& values, int i, int j, vector<vector<int>> &dp)
{
    if(i+1 == j)
    {
        return 0;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT8_MAX;
    for(int k=i+1; k<j; k++ )
    {
        ans = min(ans, values[i]*values[k]*values[j] + solveMem(values,i,k,dp) + solveMem(values,k,j,dp));
    }
    dp[i][j] = ans;
    return dp[i][j];
}

int main()
{
    int n;
    cin>>n;
    int a;
    
    vector<int> values;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        values.push_back(a);
    }
    vector<vector<int>> dp(n, vector<int>(n,-1));
    cout<<solveMem(values, 0, n-1,dp);
    return 0;
}
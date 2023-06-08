#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &cost, int n)
{
    if(n == 0)
    {
        return cost[0];
    }
    if(n == 1)
    {
        return cost[1];
    }
    int ans = cost[n] + min(solve(cost, n-1), solve(cost, n-2));
    return ans;
}
int solve2(vector<int> &cost, int n, vector<int> &dp)
{
    if(n == 0)
    {
        return cost[0];
    }
    if(n == 1)
    {
        return cost[1];
    }
    if(dp[n] == -1)
    {
        return dp[n];
    }
    dp[n] = cost[n] + min(solve2(cost, n-1, dp) + solve2(cost, n-2, dp));
    return dp[n];
}
int solve3(vector<int> &cost, int n,)
{
     vector<int> &dp
}
int main()
{
    vector<int> cost;
    int n = cost.size();

    int ans = min(solve(cost, n-1), solve(cost, n-2));
    cout<< ans<< endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &obstacles, int currlane, int currpos)
{
    //base case
    int n = obstacles.size();
    if(currpos == n)
    {
        return 0;
    }
    if(obstacles[currpos+1] != currlane)
    {
        return solve(obstacles, currlane, currpos+1);
    }
    else{
        //sideways jump
        int ans = INT8_MAX;
        for(int i=1; i<=3; i++)
        {
            if(currlane != i && obstacles[currpos] != i)
            {
                ans = min(ans, 1+solve(obstacles, i, currpos));
            }
        }
        return ans;
    }
}

int solveMem(vector<int> &obstacles, int currlane, int currpos, vector<vector<int>> &dp)
{
    //base case
    int n = obstacles.size();
    if(currpos == n)
    {
        return 0;
    }
    if(obstacles[currpos+1] != currlane)
    {
        return solveMem(obstacles, currlane, currpos+1,dp);
    }
    else{
        //sideways jump
        int ans = INT8_MAX;
        for(int i=1; i<=3; i++)
        {
            if(currlane != i && obstacles[currpos] != i)
            {
                ans = min(ans, 1+solveMem(obstacles, i, currpos,dp));
            }
        }
        dp[currlane][currpos] = ans;
        return dp[currlane][currpos];
    }
}

int solveTab(vector<int> &obstacles)
{
    //base case
    int n = obstacles.size();
    vector<vector<int>> dp(4,vector<int>(n,INT8_MAX));

    dp[1][n] = 0;
    dp[2][n] = 0;
    dp[3][n] = 0;
    dp[4][n] = 0;

    for(int currpos = n-1; currpos>=0; currpos--)
    {
        for(int currlane = 1; currlane<=3; currlane++)
        {
            if(obstacles[currpos+1] != currlane)
            {
                dp[currlane][currpos] = dp[currlane][currpos+1];
            }
            else
            {
                int ans = INT8_MAX;
                for(int i=1; i<=3; i++)
                {
                    if(currlane != i && obstacles[currpos] != i)
                    {
                        ans = min(ans, 1+dp[i][currpos+1]);
                    }
                    dp[currlane][currpos] = ans;
                }
            }
        }
    }
    return min(dp[2][0], min(1+dp[1][0], 1+dp[3][0]));
    
}

int main()
{
    int n;
    cin>>n;
    int a;
    
    vector<int> obstacles;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        obstacles.push_back(a);
    }
    
    //vector<vector<int>> dp(4,vector<int>(obstacles.size(),-1));

    cout<<solveTab(obstacles);
    return 0;
}
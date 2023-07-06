#include<iostream>
#include<vector>
using namespace std;

int minimumElement(vector<int> &cost,  int k)
{
    if(k == 0)
    {
        return 0;
    }
    if(k < 0)
    {
        return INT8_MAX;
    }
    int mini = INT8_MAX;
    for(int i=0; i<cost.size(); i++)
    {
        int ans = minimumElement(cost, k-cost[i]);
        if(ans != INT8_MAX)
        {
            mini = min(mini, 1+ans);
        }
    }
    return mini;
}

int solveMem(vector<int> &cost,  int k, vector<int> &dp)
{
    if(k == 0)
    {
        return 0;
    }
    if(k < 0)
    {
        return INT8_MAX;
    }
    int mini = INT8_MAX;
    for(int i=0; i<cost.size(); i++)
    {
        int ans = minimumElement(cost, k-cost[i]);
        if(ans != INT8_MAX)
        {
            mini = min(mini, 1+ans);
        }
    }
    dp[k] = mini;
    return mini;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int a;
    
    vector<int> cost;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        cost.push_back(a);
    }
    cout<<minimumElement(cost, k)<<endl;
    return 0;
}
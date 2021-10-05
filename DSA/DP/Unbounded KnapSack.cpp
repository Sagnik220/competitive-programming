#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&val,int n,vector<int>&weights,int capacity,vector<int>&dp)
{
    dp[0]=0;
    for(int bag=0;bag<=capacity;bag++)
    {
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(weights[i]<=bag)
            {
                int rbag_capacity=bag-weights[i];
                int rbag_val=dp[rbag_capacity];
                int total_val=rbag_val+val[i];
                if(total_val>max)
                {
                    max=total_val;
                }
            }
        }
        dp[bag]=max;
    }
    cout<<dp[capacity];
}

int main() 
{
    int n,capacity;
    cin>>n>>capacity;
    vector<int>val;
    vector<int>weights;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        weights.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        val.push_back(x);
    }
    vector<int>dp(capacity+1);
    
    solve(val,n,weights,capacity,dp);
    
    return 0;
}
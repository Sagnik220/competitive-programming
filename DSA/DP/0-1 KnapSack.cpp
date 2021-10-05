#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&val,int n,vector<int>&weights,int capacity,vector<vector<int>>&dp)
{
   for(int i=1;i<dp.size();i++)
   {
       for(int j=1;j<dp[0].size();j++)
       {
               if(j>=weights[i-1])
               {
                   int rCap=j-weights[i-1];
                   if(dp[i-1][rCap]+val[i-1]>dp[i-1][j])
                   {
                       dp[i][j]=dp[i-1][rCap]+val[i-1];
                   }
                   else
                   {
                       dp[i][j]=dp[i-1][j];
                   }
               }
               else
               {
                   dp[i][j]=dp[i-1][j];//When we cant take the weights as its bigger than the current capacity
               }
       }
   }
   cout<<dp[n][capacity];
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
    vector<vector<int>>dp(n+1,vector<int>(capacity+1,0));
    
    solve(val,n,weights,capacity,dp);
    
    return 0;
}
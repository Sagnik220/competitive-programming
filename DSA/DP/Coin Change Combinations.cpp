#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n,vector<int>&coins,int tar)
{
   dp[0]=1;
   for(int i=0;i<coins.size();i++)
   {
       for(int j=coins[i];j<dp.size();j++)
       {
           dp[j]=dp[j]+dp[j-coins[i]];
       }
   }
   cout<<dp[tar];
}

int main() 
{
    int n,tar;
    cin>>n>>tar;
    vector<int>coins;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        coins.push_back(x);
    }
    vector<int>dp(tar+1,0);
    solve(dp,n,coins,tar);
    return 0;
}
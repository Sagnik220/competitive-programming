#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n,vector<int>&coins,int tar)
{
   dp[0]=1;
   for(int i=1;i<dp.size();i++)
   {
       for(auto coin:coins)
       {
           if(coin<=i)
           {
               int rmt=i-coin;
               dp[i]+=dp[rmt];
           }
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
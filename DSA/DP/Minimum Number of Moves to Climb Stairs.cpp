#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n,vector<int>&steps)
{
   dp[n]=0;
   for(int i=n-1;i>=0;i--)
   {
       if(steps[i]>0)
       {
           int mini=INT_MAX;
           for(int j=1;j<=steps[i] && i+j<dp.size();j++)
           {
               if(dp[i+j]!=-1)mini=min(mini,dp[i+j]);
           }
            if(mini!=INT_MAX)dp[i]=mini+1;
       }
   }
   cout<<dp[0];
}

int main() 
{
    int n;
    cin>>n;
    vector<int>steps;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        steps.push_back(x);
    }
    vector<int>dp(n+1,-1);
    solve(dp,n,steps);
    return 0;
}
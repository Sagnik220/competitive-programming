#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n,vector<int>&steps)
{
    dp[n]=1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=steps[i] && i+j<dp.size();j++)
        {
            dp[i]+=dp[i+j];
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
    vector<int>dp(n+1,0);
    solve(dp,n,steps);
    return 0;
}
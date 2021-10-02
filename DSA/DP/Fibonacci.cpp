#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n)
{
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    for(auto x:dp)
    {
        cout<<x<<" ";
    }
}

int main() 
{
    int n;
    cin>>n;
    vector<int>dp(n,0);
    solve(dp,n);
    return 0;
}
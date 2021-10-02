#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n)
{
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i]=i*dp[i-1];
    }
    cout<<dp[n];
}

int main() 
{
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    solve(dp,n);
    return 0;
}
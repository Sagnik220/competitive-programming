#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&dp,int n)
{
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(i<2)
        {
            dp[i]+=dp[i-1];
        }
        else if(i<3)
        {
            dp[i]+=dp[i-1]+dp[i-2];
        }
        else
        {
            dp[i]+=dp[i-1]+dp[i-2]+dp[i-3];
        }
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
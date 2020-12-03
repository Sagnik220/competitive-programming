#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
        ll i=0;
        ll dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
       if(n==1)
       {
           cout<<1<<endl;
       }
       else if(n==2)
       {
           cout<<2<<endl;
       }
       else if(n==3)
       {
           cout<<4<<endl;
       }
       else
       {
           for(ll i=4;i<=n;i++)
           {
               dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
           }
           cout<<dp[n]<<endl;
       }
       

    }
    return 0;
}
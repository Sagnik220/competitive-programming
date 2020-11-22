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
     ll count=0;
    while(t--)
    {
       ll x,y,z;
       cin>>x>>y>>z;
       ll sum=0;
       sum=x+y+z;
       if(sum>=2)
       {
         count++;   
       }
    }
    cout<<count<<endl;
    return 0;
}


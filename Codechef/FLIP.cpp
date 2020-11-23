#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--) 
    {
       string s1,s2;
       cin>>s1;
       cin>>s2;
       ll ans=0;
       for(ll i=0;i<s1.length();i=i+2)
       {
           if(s1[i]!=s2[i])
           {
               while(i<s1.length() && s1[i]!=s2[i])
               {
                  i=i+2;
               }
                ans++;
           }
       }
       for(ll i=1;i<s1.length();i=i+2)
       {
           if(s1[i]!=s2[i])
           {
               while(i<s1.length() && s1[i]!=s2[i])
               {
                   i=i+2;
               }
               ans++;
           }
       }
       cout<<ans<<endl;
       
    }
    return 0;
}
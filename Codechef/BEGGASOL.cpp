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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
       ll initial_amt=a[0];
       ll dist=0;
       for(ll i=1;i<n;i++)
       {
           if(initial_amt==0)
           {
               break;
           }
           else
           {
               initial_amt+=a[i]-1;
               dist++;
           }
       }
       cout<<initial_amt+dist<<endl;
       
       
    }
    return 0;
}

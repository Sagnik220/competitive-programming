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
        sort(a,a+n);
        ll last_digit=a[n-1];
        ll sum=0;
        for(ll i=0;i<n-1;i++)
        {
            sum+=a[i];
        }
        if(sum!=0 && sum%last_digit==0)
           {
               cout<<0<<endl;
           }
        else
        {
            cout<<abs(sum-last_digit)<<endl;
        }
    }
    return 0;
}


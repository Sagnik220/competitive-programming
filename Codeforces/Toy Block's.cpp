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
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            
        }
        sort(a,a+n);
        ll last_digit=a[n-1];
        ll c=ceil((sum*1.0)/(n-1));
        ll total=c*(n-1);
        if(last_digit>c)
        {
            total=last_digit*(n-1);
        }
        cout<<total-sum<<endl;
    }
    return 0;
}


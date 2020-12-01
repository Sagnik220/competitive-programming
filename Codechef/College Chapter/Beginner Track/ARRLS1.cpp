#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l,r;
    cin>>l>>r;
    for(ll i=l-1;i<r;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

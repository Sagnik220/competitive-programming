#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin>>n;
    vector<ll>v;
    if(n==1)
    {
        cout<<1<<endl;
    }
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    if(n%2==0)
    {
        for(ll i=2;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        for(ll i=1;i<n;i=i+2)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        for(ll i=n-1;i>0;i=i-2)
        {
            cout<<i<<" ";
        }
        for(ll i=n;i>0;i=i-2)
        {
            cout<<i<<" ";
        }
    }
    
	return 0;
}
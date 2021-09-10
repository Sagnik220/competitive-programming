#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[100000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto u:mp)
        {
            if(x==u.first)
            {
                count=u.second;
            }
        }
        ll count2=0;
        for(int i=0;i<n;i++)
        {
            if(x==a[i])
            {
                count2=i;
                break;
            }
            
        }
        if(binary_search(a,a+n,x))
        {
            cout<<count2<<" "<<count2+count-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
	
	return 0;
}
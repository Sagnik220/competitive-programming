#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    ll count=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            count+=abs(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    cout<<count<<endl;
    
	return 0;
}
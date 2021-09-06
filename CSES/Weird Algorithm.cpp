//Minimum Steps to make anagrams when 2 strings are given
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
    v.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            v.push_back(n);
        }
        else
        {
            n=n*3+1;
            v.push_back(n);
        }
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
	
	return 0;
}
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        ll x,y;
	        cin>>x>>y;
	    }
	    
	    ll total=n;

	 
	  while(n>=6LL)
	   {
    	   n=n/2;
    	   total+=n;
	   }
	   cout<<total<<endl;
	    
	}
	return 0;
}

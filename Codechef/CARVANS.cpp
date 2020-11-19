#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    ll counter=0;
	    if(n==0)
	    {
	        cout<<0<<endl;
	    }
	    if(n==1)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	         for(ll i=1;i<n;i++)
	         {
               if(a[i]>a[i-1])
               {
                   a[i]=a[i-1];
                }
                else
                {
                    counter++;
                }
            }
	       cout<<counter+1<<endl;
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;
#define mod 1000000007
#define ll long long

ll power(ll x,ll n)
{
    ll result=1;
    while(n)
    {
        if(n & 1)
        {
            result=result*x%mod;
        }
        n=n/2;
        x=x*x%mod;
    }
    return result;
}

ll div1(ll a,ll b)
{
    return(a%mod*(power(b,mod-2)%mod))%mod;
}

ll sol1(ll n,ll r)
{
    ll ans=1;
    ll k=min(r,n-r);
    for(ll i=0;i<k;i++)
    {
        ans=(ans%mod*(n-i)%mod)%mod;
        ans=div1(ans,i+1);
    }
    return ans%mod;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n],ans;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    ll max=0,max_value=0;
	    for(ll i=0;i<n;i++)
	    {
	        if(max<a[i])
	        {
	            max=a[i];
	        }
	    }
	    for(ll i=0;i<n;i++)
	    {
	        if(max==a[i])
	        {
	            max_value++;
	        }
	    }
	    if(n==1)
	    {
	        cout<<2<<""<<endl;
	        continue;
	    }
	    if(max_value%2!=0)
	    {
	        ans=power(2,n)%mod;
	    }
	    else
	    {
	        ans=power(2,n)%mod -
	            ((power(2,n-max_value)%mod)*sol1(max_value,max_value/2)%mod)%mod;
	    }
	    if(ans<0)
	    {
	        ans=(ans+mod)%mod;
	    }
	    cout<<ans%mod<<endl;
	}
	
	return 0;
}

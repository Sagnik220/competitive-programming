#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	ll maxrev=0;
	for(int i=0;i<n;i++)
	{
	    maxrev=max(maxrev,a[i]*(n-i));
	}
	cout<<maxrev<<endl;
	return 0;
}

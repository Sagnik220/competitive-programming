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
    int sum=n*(n+1)/2;
    int sum_miss=0;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        sum_miss+=x;
    }
	int diff=sum-sum_miss;
	cout<<diff<<endl;
	
	return 0;
}
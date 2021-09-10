#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x:v)
	{
	    cout<<x<<" ";
	}
	return 0;
}

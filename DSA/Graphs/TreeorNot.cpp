#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int>ar[100001];
int vis[100001];

void dfs(int node)
{
	vis[node]=1;
	for(auto x:ar[node])
	{
		if(vis[x]==0)
		{
			dfs(x);
		}
	}
}

int main()
{
	ll n,m,a,b;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	int cc_count=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			cc_count++;
		}
	}
	if(cc_count==1 && m==n-1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
	
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int>arr[1001];
int vis[1001],dis[1001];

void dfs(int node,int distance)
{
	vis[node]=1;
	dis[node]=distance;
	for(auto x:arr[node])
	{
		if(vis[x]==0)
		{
			dfs(x,dis[node]+1);
		}
	}
}

int main()
{
	ll n,q,a,b;
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1,0);
	cin>>q;
	ll ans=-1;
	ll min_dist=1e9+1;
	while(q--)
	{
		ll girl_city;
		cin>>girl_city;
		if(dis[girl_city]<min_dist)
		{
			min_dist=dis[girl_city];
			ans=girl_city;
		}
		else
		{
			if(dis[girl_city]==min_dist && girl_city<ans)
			{
				ans=girl_city;
			}
		}
	}
	cout<<ans;
}

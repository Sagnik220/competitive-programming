#include <bits/stdc++.h>
using namespace std;

#define ll long long


void print(vector<pair<int,int>>&v)
{
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}

bool firstbyasc_secondbydesc(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    {
        return a.first<b.first;
    }
    return b.second>a.second;
}

int main()
{
	int n;
	cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),firstbyasc_secondbydesc);
    print(v);
	return 0;
}

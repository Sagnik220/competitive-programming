#include <bits/stdc++.h>
#include<utility>
#include<unordered_map>
using namespace std;
#define ll long long

bool cmp(pair<ll, ll>& a,pair<ll, ll>& b) 
{ 
    return a.first > b.first; 
} 
void sort(map<ll,ll>& mp) 
{ 
    vector<pair<ll,ll> > A; 
    for (auto& it : mp) 
    { 
        A.push_back(it); 
    } 
    sort(A.begin(), A.end(), cmp); 
} 
int main()
{
    ll n,flag=0;
    cin >> n;
    vector<vector<ll>> marks(n);
    map<ll, ll> mp;
    ll id, s0, s1, s2, s3, s4;
    for (ll i = 0; i < n; i++)
    {
        cin >> id >> s0 >> s1 >> s2 >> s3 >> s4;
        marks[i] = {id, s0, s1, s2, s3, s4};
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>marks[i][j];
        }
    }
    for(ll i=0;i<marks.size();i++)
    {
        ll sum=0;
        for(ll j=1;j<marks[i].size();j++)
        {
           if(marks[i][j]<35)
           {
               break;
           }
           else
           {
               sum+=marks[i][j];
           }
        }
         mp.insert({sum,marks[i][0]});
    }
    sort(mp);
    vector<ll>ans;
    for(auto& x:mp)
    {
        if(x.first==0)
        {
            flag=1;
        }
        else
        {
            ans.push_back(x.second);
        }
    }
    reverse(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

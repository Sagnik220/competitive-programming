#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printvec(vector<pair<int,int>>&v)
{
    for(auto x:v)
   {
       cout<<x.first<<" "<<x.second<<endl;
   }
}
bool sortbysecond(const pair<int,int>&a,const pair<int,int>&b)
{
    return(a.second<b.second);
}
bool sortbyseconddesc(const pair<int,int>&a,const pair<int,int>&b)
{
    return(a.second>b.second);
}
bool sortbyfirstdesc(const pair<int,int>&a,const pair<int,int>&b)
{
    return(a.first>b.first);
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
       v.push_back(make_pair(x,y));
   }
    sort(v.begin(),v.end(),sortbyfirstdesc);
    printvec(v);
   return 0;
}
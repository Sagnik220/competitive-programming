#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>>res;

void solve(vector<int>& v,int index,vector<int>& curr)
{
   res.push_back(curr);
   for(int i=index;i<v.size();i++)
   {
       curr.push_back(v[i]);
       solve(v,i+1,curr);
       curr.pop_back();
   }
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
   vector<int>curr;
   solve(v,0,curr);
   for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The size of subset is:"<<res.size()<<endl;
   return 0;
}
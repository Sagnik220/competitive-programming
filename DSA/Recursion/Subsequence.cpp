#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<char>>res;

void solve(string& s,int index,vector<char>&curr)
{
   res.push_back(curr);
   for(int i=index;i<s.size();i++)
   {
       curr.push_back(s[i]);
       solve(s,i+1,curr);
       curr.pop_back();
   }
}

int main()
{
   string s;
   cin>>s;
   vector<char>curr;
   solve(s,0,curr);
   for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The size of subseq is:"<<res.size()<<endl;
   return 0;
}
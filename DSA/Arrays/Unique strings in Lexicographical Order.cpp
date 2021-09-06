#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        m[s]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
   return 0;
}
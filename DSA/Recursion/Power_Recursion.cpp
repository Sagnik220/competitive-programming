#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int n,int k)
{
    if(k==0)
        return 1;
    else
        return n*solve(n,k-1);
}

int main()
{
   int n,k;
   cin>>n>>k;
   int ans=solve(n,k);
   cout<<ans<<endl;
   
   return 0;
}
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
   ll n, sum=0, x;
   cin>>n;
   for(ll i; i<n; ++i)
   {
       cin>>x;
       if(i==1)
        sum-=x;
       else
       sum+=x;
   }
   cout<<sum<<endl;
return 0;
}
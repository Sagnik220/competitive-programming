#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll len=s.length();
        ll mid=(len/2+(len%2==0?0:1));
        string a=s.substr(0,(len/2));
        string b=s.substr(mid,len/2);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
	
	return 0;
}

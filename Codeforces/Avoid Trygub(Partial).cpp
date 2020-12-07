#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        char s[100000];
        for(ll i=0;i<n;i++)
        {
            cin>>s[i];
        }
        ll len=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='y')
            {
                break;
            }
            else
            {
                 len++;
            }
        }
        if(len<n)
        {
            char first=s[len];
            cout<<first;
            for(ll i=0;i<len;i++)
            {
                cout<<s[i];
            }
            for(ll i=len+1;i<n;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
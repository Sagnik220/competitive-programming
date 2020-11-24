#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(ll i=0;i<q;i++)
        {
            ll l,r;
            cin>>l>>r;
            int flag=0;
            ///Checking for the left most bit in the left side of the given substring///
            for(ll i=0;i<l-1;i++)
            {
                if(s[l-1]==s[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag!=0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            ///Checking for the right most substring in the right side of the given substring///
            for(ll i=r;i<n;i++)
            {
                if(s[r-1]==s[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag!=0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    return 0;
}


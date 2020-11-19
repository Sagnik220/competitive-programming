#include<bits/stdc++.h>
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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll x=k+1;
        ll l,r,count=0;
        queue<ll>magnet,iron;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='M')
            {
                magnet.push(i);
            }
            if(s[i]=='I')
            {
                iron.push(i);
            }
            if(s[i]=='X' || i==n-1)
            {
                while(!magnet.empty() && !iron.empty())
                {
                    ll counter=0;
                    l=min(magnet.front(),iron.front());
                    r=max(magnet.front(),iron.front());
                    for(ll i=l;i<=r;i++)
                    {
                        if(s[i]==':')
                        {
                            counter++;
                        }
                    }
                    if((x-abs(l-r)-counter)>0)
                    {
                        count++;
                        magnet.pop();
                        iron.pop();
                    }
                    else if(magnet.front()<iron.front())
                    {
                        magnet.pop();
                    }
                    else
                    {
                        iron.pop();
                    }
                }
                while(!magnet.empty())
                {
                    magnet.pop();
                }
                while(!iron.empty())
                {
                    iron.pop();
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
    
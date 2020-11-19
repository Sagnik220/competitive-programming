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
        ll x,y;
        cin>>x>>y;
        ll count=0;
        if(x==0 && y==0)
        {
            count=0;
        }
        else if(x==y)
        {
            count=x*2;
        }
        else if(x>y)
        {
            count=x*2-1;
        }
        else
        {
            count=y*2-1;
        }
        cout<<count<<endl;
    }
    return 0;
}


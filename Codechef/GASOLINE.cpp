#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll fuel[n],cost[n];
        for(int i=0;i<n;i++)
        {
            cin>>fuel[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>cost[i];
        }
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++)
        {
            v.push_back({cost[i],fuel[i]});
        }
        sort(v.begin(),v.end());
        ll rem=n;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll cost=v[i].first;
            ll fuel=v[i].second;
            if(fuel!=0)
            {
                if(fuel<=rem)
                {
                    rem-=fuel;
                    ans += (fuel*cost);
                }
                else
                {
                    ans += (rem*cost);
                    rem=0;
                    break;
                }
            }
            if(rem==0) 
                break;
        }
    
        cout<<ans<<endl;
    }
    return 0;
}


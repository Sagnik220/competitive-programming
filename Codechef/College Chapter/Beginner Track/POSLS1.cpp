#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll x;
        cin>>x;
        ll sum=0;
        int curr_sum=0;
        ll counter=0;
        for (int i = 0; i < n; i++)
        {
            int sum_so_far = 0;
            for (int j = i; j < n; j++)
            {
                sum_so_far += a[j];
                if (sum_so_far ==x) 
                {
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
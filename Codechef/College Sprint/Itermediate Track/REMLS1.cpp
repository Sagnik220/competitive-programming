#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x;
    cin>>n;
    vector<int>arr(n);
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int rp = 0;
    int j = arr.size()-1;
    for(int i=arr.size()-1; i>=0; i--)
    {
        if(i+1 == arr.size() || arr[i] <= arr[i+1])
        {
            rp++;
            j=i;
        }
        else break;
    }
 
    int lp = 0;
    int ans = arr.size() - 1;
    for(int i=0; i<j; i++) 
    {
        if(i==0 || arr[i] >= arr[i-1])
        {
            lp++;
            int r = (lower_bound(arr.begin() + j, arr.end(), arr[i]) - arr.begin());
            ans = min(ans, r - i - 1);
        }
        else break;
    }
    cout<<min((int)arr.size() - lp, min((int)arr.size() - rp, ans))<<endl;
return 0;
}

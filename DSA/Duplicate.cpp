#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        nums.push_back(x);
    }
    unordered_map<int,int>mp;
    for(auto i:nums)
    {
        mp[nums[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second>1)
        {
            cout<<x.first;
        }
    }
    return 0;
}
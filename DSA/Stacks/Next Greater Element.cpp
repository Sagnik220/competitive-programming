#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(vector<ll>&v)
{
    stack<ll>st;
    vector<ll>ans(v.size(),-1);
    for(int i=0;i<v.size();i++)
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            ans[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    solve(v);
    
	return 0;
}
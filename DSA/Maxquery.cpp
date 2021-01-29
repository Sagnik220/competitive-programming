#include<bits/stdc++.h>

using namespace std;

int main()
{
    //O(Q*N) Time Complexity
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int maximum=0;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            maximum=max(maximum,arr[i]);
        }
        cout<<maximum<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    vector<int>arr;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        arr.push_back(x);
        arr.push_back(y);
        arr.push_back(z);
        sort(arr.begin(),arr.end());
        if(arr[0]+arr[1]==arr[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        arr.clear();
    }
	
	return 0;
}

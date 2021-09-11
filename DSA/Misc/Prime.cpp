#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n)
{
    int end=n/2;
    int flag=0;
    for(int i=2;i<=end;i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
 
	return 0;
}

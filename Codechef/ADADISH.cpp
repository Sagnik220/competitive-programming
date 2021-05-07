#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[10000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        reverse(a,a+n);
        if(n==1)
            cout<<a[0]<<endl;
        else if(n==2)
            cout<<max(a[0],a[1])<<endl;
        else if(n==3)
        {
            sort(a,a+n);
            cout<<max(a[0]+a[1],a[2])<<endl;
        }
        else
        {
            sort(a,a+n);
            cout<<min(max(a[0]+a[3],a[1]+a[2]),max(a[0]+a[1]+a[2],a[3]))<<endl;
        }
    }
	return 0;
}

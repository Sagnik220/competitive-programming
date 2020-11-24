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
        ll n;
        cin>>n;
        int len=n-1+1, i , r , temp;
        int num[len];
    
        for( temp=0,i=1; temp<len; i++,temp++ )
            num[temp] = i;
    
        srand( time(NULL) );  //seed rand()
 
        //Fisher–Yates shuffle algorithm
        for( i=len-1; i>0; i-- )
        {
            r = rand()%i;
            temp = num[i];
            num[i] = num[r];
            num[r] = temp;
        }
    
        for( i=0; i<len; i++ )
        {
            cout << num[i] <<" ";
        }
        cout<<endl;
        }
    return 0;
}

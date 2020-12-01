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
        string s;
        cin>>s;
        ll len=s.size();
        ll counter=0;
        for(ll i=0;i<len;i++)
        {
            int j;   
            for (j=0; j<i; j++)
            {
                if (s[i] == s[j])
                {
                    counter++;
                     break; 
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
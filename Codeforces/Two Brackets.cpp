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
        ll ans=0;
        ll flag_round=0,flag_square=0;
        for(char c:s)
        {
            if(c=='(')
            {
                flag_round++;
            }
            if(c=='[')
            {
                flag_square++;
            }
            if(c==')')
            {
                if(flag_round)
                {
                    flag_round--;
                    ans++;
                }
            }
             if(c==']')
            {
                if(flag_square)
                {
                    flag_square--;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


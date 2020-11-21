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
       string s,o;
       cin>>s;
       ll coded_num;
       char first,last;
       ll len=s.size();
       coded_num=len-2;
        string convert=to_string(coded_num);
       if(len>10)
       {
            first=s[0];
            last=s[len-1];
            o=o+first;
            o=o+convert;
            o=o+last;
            cout<<o<<endl;
       }
       else
       {
           cout<<s<<endl;
       }
    }
    return 0;
}


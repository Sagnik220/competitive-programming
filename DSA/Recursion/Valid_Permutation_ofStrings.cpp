#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string& s,int index)
{
   if(index>=s.length())
    {
        cout<<s<<endl;
        return;
    }
    for(int i=index;i<s.length();i++)
    {
        swap(s[index],s[i]);
        solve(s,index+1);
        swap(s[index],s[i]);
    }
}

int main()
{
   string s;
   cin>>s;
   solve(s,0);
   return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin>>s;
    int counter=1,maxi=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]==s[i])
        {
            counter++;
            maxi=max(maxi,counter);
        }
        else if(s[i]!=s[i-1])
        {
            counter=1;
            maxi=max(maxi,counter);
        }
    }
	cout<<maxi<<endl;
	return 0;
}
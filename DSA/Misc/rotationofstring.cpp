#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool rotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    string temp;
    temp=s1+s1;
    return(temp.find(s2)!=-1);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        if (rotation(s1,s2))
            printf("Strings are rotations of each other"); 
        else
            printf("Strings are not rotations of each other");
        
    }
	
	return 0;
}
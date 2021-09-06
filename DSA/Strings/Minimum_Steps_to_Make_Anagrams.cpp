//Minimum Steps to make anagrams when 2 strings are given
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void minimum_steps(string &s,string &t)
{
    int count=0;
    vector<int>frequency(26,0);
    //Storing frequency of the string s in a frequency vector;
    for(auto x:s)
    {
        frequency[x-'a']++;
    }
    //Checking while parsing through the other string if the character is present or not
    for(auto x:t)
    {
        //This if statement checks if the character of s is already present or not in the vector
        if(frequency[x-'a']!=0)
        {
            frequency[x-'a']--;
        }
        else
        {
            count++;
        }
    }
    cout<<count<<"\n";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s,t;
    cin>>s>>t;
    minimum_steps(s,t);
	
	return 0;
}
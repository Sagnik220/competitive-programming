//Amazon Interview Questions:

//1.Find the final path when the shell commands are given.


// Given test case for example:
/*
Number of commands= 7
vector<string>/Shell commands=> ab cd .. e . f .. 

Output:

ab/e

*/

#include <bits/stdc++.h>

using namespace std;


void solve(vector<string>&arr)
{
   stack<string>st;
   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]==".." && !st.empty())
       {
           st.pop();
       }
       else if(arr[i]=="." && !st.empty()){}
       else 
       {
           st.push(arr[i]);
       }
   }
   string ans="";
   while(!st.empty())
   {
       ans=st.top()+"/"+ans;
       st.pop();
   }
   ans.pop_back();
   cout<<ans<<endl;
  
}

int main() 
{
   int n;
   cin>>n;
   vector<string>arr;
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       arr.push_back(s);
   }
solve(arr);
    return 0;
}

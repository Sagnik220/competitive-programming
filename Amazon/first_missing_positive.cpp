//Amazon Interview Questions:

//1.Find the next missing positive.[Leetcode Hard]


// Given test case for example:
/*
Size= 7 
Elements=> 1 2 3 4 6 7 2

Output: 5
*/

#include <bits/stdc++.h>

using namespace std;


void solve(vector<int>&arr)
{
   // We swap until the elements are in correct place, if the index and arr[index] are not same we can say that
   // this the first element which is missing
   
   int n=arr.size();
   for(int i=0;i<n;i++)
   {
       while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1])
       {
           swap(arr[i],arr[arr[i]-1]);
       }
   }
   
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=i+1)
       {
           cout<<i+1<<endl;
           break;
       }
   }
  
}

int main() 
{
   int n;
   cin>>n;
   vector<int>arr(n,0);
   
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    solve(arr);
    return 0;
}

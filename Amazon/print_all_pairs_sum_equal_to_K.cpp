//Amazon Interview Questions:

//1.Find all the pairs which sums to given amount k.(Optimal Solution)


// Given test case for example:
/*
    
    Size of Array=7 
    Sum=5
    Array Elements=> 1 2 3 3 4 5
    
    Thus the pairs will be (1,4) , (2,3), (3,2) , (3,2) , (4,1)
*/

#include <bits/stdc++.h>

using namespace std;


void solve(vector<int>&arr,int sum)
{
    unordered_map<int,int>mp;
    
    for(auto x:arr)
    {
        mp[x]++;
    }
    for(auto x:mp)
    {
        while(x.second--)
        {
            if(mp.find((sum-x.first))!=mp.end())
            {
                cout<<x.first<<" "<<sum-x.first<<endl;
            }
        }
    }
}

int main() 
{
   int n,k;
   cin>>n>>k;
   vector<int>arr(n,0);
   
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    solve(arr,k);
    return 0;
}

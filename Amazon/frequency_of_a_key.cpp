//Amazon Interview Questions:

//1.Given an unsorted array find the frequency of given Key.(Optimal Solution)


// Given test case for example:
/*
    
    Size of Array=7 
    Key=2
    Array Elements=> 1 2 2 2 3 4 5
*/

#include <bits/stdc++.h>

using namespace std;
// Lower bound return's the first element of the given element so for K=2 it will return 5 instead of 4
int lower_bound(vector<int>&arr,int k)
{
    int low=0,high=arr.size()-1;
    int mid;
    while(high-low>1)
    {
        mid=(high+low)/2;
        if(arr[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    if(arr[high]>=k)
    {
        return high;
    }
    if(arr[low]>=k)
    {
        return low;
    }
    
    return -1;
    
    
}
// Upper bound strictly return's the next element of the given element so for K=2 it will return 5 instead of 4
int upper_bound(vector<int>&arr,int k)
{
    int low=0,high=arr.size()-1;
    int mid;
    while(high-low>1)
    {
        mid=(high+low)/2;
        if(arr[mid]<=k)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    if(arr[high]>k)
    {
        return high;
    }
    if(arr[low]>k)
    {
        return low;
    }
    return -1;
    
}

void solve(vector<int>&arr,int k)
{
    int low=lower_bound(arr,k);
    int high=upper_bound(arr,k)-1;
    std::cout << abs(high-low) << std::endl;
    
}

int main() 
{
   int n,k;
   cin>>n>>k;
   vector<int>arr(n,0);
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
  solve(arr,k);
	return 0;
}

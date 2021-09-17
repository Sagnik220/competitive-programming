//Sorting Algorithms
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    
    do{
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    
    swap(arr[low],arr[j]);
    
    return j;
    
}

void quicksort(int arr[],int low,int high,int n)
{
    //O() time complexity
    int partitionindex;//Index of pivot after partition
    
    if(low<high)
    {
        partitionindex=partition(arr,low,high);
    
        quicksort(arr,low,partitionindex-1,n);
        quicksort(arr,partitionindex+1,high,n);
        
    }
}

void print(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1,n);
    print(arr,n);
    return 0;
}


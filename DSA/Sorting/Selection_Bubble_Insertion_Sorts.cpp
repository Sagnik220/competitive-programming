//Sorting Algorithms
#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n)
{
    //O(n^2) time complexity
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[],int n)
{
    //O(n^2) time complexity
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }
    
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int arr[],int n)
{
    //O(n^2) time complexity
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[i];
            j--;
        }
        arr[j+1]=current;
    }
    
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
    selectionsort(arr,n);
    bubblesort(arr,n);
    insertionsort(arr,n);
    return 0;
}


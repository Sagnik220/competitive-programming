#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10000]={1,2,3,4,8,7,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    if(binary_search(arr,arr+len,2))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


}
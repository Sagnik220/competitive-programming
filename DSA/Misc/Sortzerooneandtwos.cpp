#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[100001];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

void sort012(int a[], int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            c0++;
        else if(a[i]==1)
            c1++;
        else
            c2++;
    }
    int k=0;
    for(int i=0;i<c0;i++)
    {
        a[k++]=0;
    }
     for(int i=0;i<c1;i++)
    {
        a[k++]=1;
    }
     for(int i=0;i<c2;i++)
    {
        a[k++]=2;
    }
    
}
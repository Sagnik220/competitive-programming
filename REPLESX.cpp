#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;


int FindIndex(int a[],int n,int x,int p)
{
    int min=100000000;
    int minp=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            if(abs(p-i)<min)
            {
                min=abs(p-i);
                minp=i;
            }
        }
    }
    return minp;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,p,k;
        cin>>n>>x>>p>>k;
        int i=0,counter=0;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int index=FindIndex(a,n,x,p);
        if(a[index]!=x)
        {
            a[k-1]=x;
            sort(a,a+n);
            counter++;
        }
        if(a[p-1]==x)
        {
            cout<<0+counter<<endl;
            
        }
        else if(p>k && a[p-1]>x)
        {
            cout<<-1<<endl;
          
        }
        else if(p<k && a[p-1]<x)
        {
            cout<<-1<<endl;
            
        }
        else
        {
            index=FindIndex(a,n,x,p)+1;
            cout<<abs(p-index)+counter<<endl;
        }
        
    }
	
	return 0;
}


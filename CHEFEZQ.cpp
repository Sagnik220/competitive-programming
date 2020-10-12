#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,i=0;
        cin>>n>>k;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long counter=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=k)
            {
                counter++;
                a[i+1]+=(a[i]-k);
            }
            if(a[i]<k)
            {
                break;
            }
        }
        if(i==n)
        {
            counter+=((a[n-1]-k)/k);
        }
        cout<<counter+1<<endl;
        
    }
    return 0;
}

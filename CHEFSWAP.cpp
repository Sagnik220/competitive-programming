#include <iostream>
#include<cmath>
using namespace std;

long long track(long long sum)
{
    long double ans=sqrtl(1ul+4*(sum));
    ans=ans-1.0;
    ans=ans/2.0;
    long long final=ans;
    return final;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=n*(n+1)/2;
        if(sum%2!=0)
        {
            cout<<0<<endl;
           
        }
        else
        {
            long long x=track(sum);
            long long subsum=x*(x+1)/2;
            if(sum/2==subsum)
            {
                long long result=(x*(x-1ul))/2l+((n-x)*(n-x-1ul))/2l+(n-x);
                cout<<result<<endl;
            }
            else
            {
                cout<<n-x<<endl;
            }
        }
    }
	return 0;
}

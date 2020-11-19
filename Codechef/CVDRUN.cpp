#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y,flag=0;
        cin>>n>>k>>x>>y;
        if(y>n)
            cout<<"NO"<<endl;
        else
        {
            for(int i=1;i<=n;i++)
            {
                if((x+k*i)%n==y)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
	return 0;
}

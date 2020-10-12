#include <iostream>
using namespace std;

int bitwise(int a)
{
    return a!=0 && ((a&(a-1))==0);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	    {
	        cout<<1<<endl;
	        continue;
	    }
	    else if(n==3)
	    {
	        cout<<1<<" "<<3<<" "<<2<<endl;
	        continue;
	    }
	    else if(n==5)
	    {
	        cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
	        continue;
	    }
	    else if(bitwise(n))
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    else
	    {
	        cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
	        int i=6;
	        while(i<=n)
	        {
	            if(bitwise(i))
	            {
	                cout<<i+1<<" "<<i<<endl;
	                i+=2;
	            }
	            else
	            {
	                cout<<i<<" ";
	                i++;
	            }
	        }
	        cout<<endl;
	    }
	}
	
	return 0;
}

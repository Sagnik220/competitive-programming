#include <iostream>
using namespace std;

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
    	int x=0,y=0;
    	for(int i=0;i<4*n-1;i++)
    	{
    	    int a,b;
    	    cin>>a>>b;
    	    x^=a;
    	    y^=b;
    	    
    	    
    	}
    	cout<<x<<" "<<y<<endl;
	}
	
	
	return 0;
}

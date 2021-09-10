#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    string reverse;
	    for(int i=S.size()-1;i>=0;--i)
	    {
	        reverse.push_back(S[i]);
	    }
	    if(S==reverse)
	    {
	       return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}

};


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
        Solution ob;
        cout << ob.isPlaindrome(s) << "\n";
   	}
    return 0;
}  
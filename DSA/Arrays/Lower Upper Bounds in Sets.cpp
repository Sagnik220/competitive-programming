#include <bits/stdc++.h>
using namespace std;

#define ll long long
//Incase of sets and maps we can use auto it=upper_bound(s.begin(),s.end()) as its not a o(logn) operation in this case
int main()
{
	int n;
	cin>>n;
	set<int>s;
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    s.insert(x);
	}
	auto it=s.lower_bound(3);
	cout<<(*it)<<endl;
	it=s.upper_bound(24);
	cout<<(*it)<<endl;
   
	return 0;
}

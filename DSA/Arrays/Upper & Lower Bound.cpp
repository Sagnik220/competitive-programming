#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print(vector<int>&v)
{
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
	int n;
	cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    print(v);
    //Lower Bound Always Returns the pointer to the element if its present
    auto it=lower_bound(v.begin(),v.end(),3);
    cout<<(*it)<<endl;
    //LowerBound returns next largest of the element if the element is not present
    it=lower_bound(v.begin(),v.end(),4);
    cout<<(*it)<<endl;
    //Upper Bound always returns the next element if the element is present
    it=upper_bound(v.begin(),v.end(),3);
    cout<<(*it)<<endl;
    //Upper Bound returns next address to the last element if the element is not present
    it=upper_bound(v.begin(),v.end(),25);
    cout<<(*it)<<endl;
	return 0;
}

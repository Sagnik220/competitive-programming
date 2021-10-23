#include <bits/stdc++.h>
using namespace std;

void add(int a,int b)
{
    cout<<a+b<<endl;
}
void add(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}

int main() 
{
    int a=3,b=5,c=1;
    add(a,b);
    add(b,c);
    add(a,b,c);
    
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if(n==0)
        cout<<0;
    int old_countz=1;
    int old_counto=1;
    for(int i=2;i<=n;i++)
    {
        int new_countz=old_counto;
        int new_counto=old_countz+old_counto;
        
        old_countz=new_countz;
        old_counto=new_counto;
    }
    int total=old_counto+old_countz;
    cout<<total;
}

int main() 
{
    int n;
    cin>>n;
    solve(n);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class A{
  int a=2;
  int b=3;
  public:
    friend int mul(A x)
    {
        return (x.a*x.b);
    }
  
    
};

int main() 
{
   A obj;
   int res=mul(obj);
   cout<<res<<endl;
    
	return 0;
}
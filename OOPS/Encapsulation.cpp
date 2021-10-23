#include <bits/stdc++.h>
using namespace std;

class Encap{
    int x;
    public:
        int get(int a)
        {
            x=a;
        }
        int set()
        {
           return x; 
        }
};

int main() 
{
    Encap obj;
    obj.get(5);
    cout<<obj.set()<<endl;
    
	return 0;
}
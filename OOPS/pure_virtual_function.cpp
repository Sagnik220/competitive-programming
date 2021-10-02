//Sorting Algorithms
#include <bits/stdc++.h>
using namespace std;


class Shape{
    public:
        virtual void print()=0;
};

class Square{
    public:
        void print()
        {
            cout<<"Square"<<endl;
        }
};
class rect{
    public:
        void print()
        {
            cout<<"Rectangle"<<endl;
        }
};



int main() 
{
   Square s;
   rect r;
   s.print();
   r.print();
    
    return 0;
}
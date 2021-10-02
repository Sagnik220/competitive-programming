//Sorting Algorithms
#include <bits/stdc++.h>
using namespace std;


class Shape
{
    public:
        virtual void print()
        {
            cout<<"This is a Shape"<<endl;
        }
};

class Square: public Shape
{
  public:
    void print()
        {
            cout<<"This is a Square"<<endl;
        }
};


int main() 
{
    Shape *ptr;
    Square s;
    ptr=&s;
    ptr->print();
    
    return 0;
}
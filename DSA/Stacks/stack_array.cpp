//Design a stack using array
#include <bits/stdc++.h>
using namespace std;

#define ll long long

class STACK
{
    int top=-1;
    int arr[1000];
    public:
        bool push(int x)
        {
            if(top>999)
            {
                cout<<"Stack Overflow"<<"\n";
                return false;
            }
            else
            {
                arr[++top]=x;
                cout<<"Pushed"<<" "<<x <<" "<<"into stack"<<"\n";
                return true;
            }
        }

        bool pop()
        {
            if(top<0)
            {
                cout<<"Stack Underflow"<<"\n";
                return 0;
            }
            else
            {
                int x=arr[top--];
                cout<<"Popped"<<" "<<x<<" "<<"out of stack"<<""<<"\n";
                return 1;
            }
        }

        int peek()
        {
            if(top<0)
            {
                cout<<"Stack is Empty"<<"\n";
                return 0;
            }
            else
            {
                int x=arr[top];
                return x;
            }
        }

        bool isEmpty()
        {
            if(top<0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

};

int main()
{
    STACK s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.push(55);
    while(!s.isEmpty())
    {
        s.pop();
    }
    return 0;
}
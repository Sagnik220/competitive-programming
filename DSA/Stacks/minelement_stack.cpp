//Design a stack that returns the minimum element in constant time
#include <bits/stdc++.h>
using namespace std;

#define ll long long

class minelement_stack
{
    stack<int>s;
    stack<int>aux;
    
    public:
        void push(int x) 
        {
            s.push(x);
            if(aux.empty())
            {
                aux.push(x);
            }
            else
            {
                if(aux.top()>=x)
                {
                    aux.push(x);
                }
            }
        }

        int pop()
        {
            if(s.empty())
            {
                cout<<"Empty stack"<<"\n";
                return -1;
            }
            int top=s.top();
            s.pop();

            if(top==aux.top())
            {
                aux.pop();
            }

            return top;
        }

        int top()
        {
            return s.top();
        }

        int size()
        {
            return s.size();
        }

        bool empty()
        {
            return s.empty();
        }

        int min()
        {
            if(aux.empty())
            {
                cout << "Underflow"<<"\n";
                return -1;
            }
            return aux.top();
        }
};

   
int main()
{
    minelement_stack s;

    s.push(6);
    cout << s.min() <<" ";    // prints 6
 
    s.push(7);
    cout << s.min() <<" ";    // prints 6
 
    s.push(8);
    cout << s.min() << " ";    // prints 6
 
    s.push(5);
    cout << s.min() << " ";    // prints 5
 
    s.push(3);
    cout << s.min() << " ";    // prints 3
 
    s.pop();
    cout << s.min() << " ";    // prints 5
 
    s.push(10);
    cout << s.min() << " ";    // prints 5
 
    s.pop();
    cout << s.min() << " ";    // prints 5
 
    s.pop();
    cout << s.min() << " ";    // prints 6
 
    return 0;
}
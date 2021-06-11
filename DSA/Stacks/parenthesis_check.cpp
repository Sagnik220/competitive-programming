#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool valid_parenthesis(string s) 
{
    //To be valid the string needs to be of even lenght,so AND of 1,1 is 1 so it will return false,as the last bit of odd numbers is 1
    if(s.length() & 1)
    {
        return false;
    }

    stack<char>stack;

   // traverse the input expression
    for (char ch: s)
    {
        // if the current character in the expression is an opening brace,
        // push it into the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
 
        // if the current character in the expression is a closing brace
        if (ch == ')' || ch == '}' || ch == ']')
        {
            // return false if a mismatch is found (i.e., if the stack is empty,
            // the expression cannot be balanced since the total number of opening
            // braces is less than the total number of closing braces)
            if (stack.empty()) {
                return false;
            }
 
            // pop character from the stack
            char top = stack.top();
            stack.pop();
 
            // if the popped character is not an opening brace or does
            // not pair with the current character of the expression
            if ((top == '(' && ch != ')') || (top == '{' && ch != '}') || (top == '[' && ch != ']')) 
            {
                return false;
            }
        }
    }
 
    // the expression is balanced only when the stack is empty at this point
    return stack.empty();
}

int main()
{
    string s="{()}[{}]";

    if (valid_parenthesis(s)) 
    {
        cout << "The expression is balanced";
    }
    else 
    {
        cout << "The expression is not balanced";
    }

    return 0;
}
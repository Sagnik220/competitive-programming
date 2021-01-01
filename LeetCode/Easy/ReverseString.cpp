class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int len=s.size()-1;
        int start=0,end=len;
        int temp;
        while(start<end)
        {
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
};
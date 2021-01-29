#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3610/

#### SOLUTION

class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(!st.empty() && ((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')))
                st.pop();
            
            else 
                st.push(s[i]);
        }
        
        if(st.size()==0)
            return true;
        return false;
    }
};
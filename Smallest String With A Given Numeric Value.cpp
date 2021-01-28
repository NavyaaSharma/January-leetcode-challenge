#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3619/

#### SOLUTION

class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        int i=n-1;
        k=k-n;
        while(k>0)
        {
            s[i]=s[i]+min(25,k);
            k=k-min(25,k);
            i--;
        }
        return s;
    }
};
#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3618/

#### SOLUTION

class Solution {
public:
    int concatenatedBinary(int n) {
        int m=1000000007;
        long long int ans=1,len;
        
        for(int i=2;i<=n;i++)
        {
            len=floor(log(i)/log(2))+1;
            ans=((ans << len)%m + i)%m;
        }
        return ans;
    }
};
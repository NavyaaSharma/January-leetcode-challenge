#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3605/
#### SOLUTION

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<=1)
            return n;
        int ans[n+1],mx=1;
        ans[0]=0;
        ans[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                ans[i]=ans[i/2];
            }
            else
            {
                ans[i]=ans[(i-1)/2]+ans[(i-1)/2+1];
            }
            if(mx<ans[i])
            {
                mx=ans[i];
            }
        }
        return mx;
    }
};
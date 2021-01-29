#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3611/

#### SOLUTION

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n=k;
        k=nums.size()-k;
        vector<int>ans(n);
        stack<int>s;
        s.push(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            while(!s.empty() && s.top()>nums[i] && k>0)
            {
                s.pop();
                k--;
            }
            s.push(nums[i]);
        }
        
        while(!s.empty() && k--)
        {
            s.pop();
        }
        
        int j=n-1;
        while(!s.empty())
        {
            ans[j]=s.top();
            s.pop();
            j--;
        }
        
        return ans;
    }
};
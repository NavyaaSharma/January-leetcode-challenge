#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3606/

#### Solution

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(int i=0;i<nums.size();i++)
        {
            p.push(nums[i]);
        }
        int ans;
        while(k--)
        {
            ans=p.top();
            p.pop();
        }
        return ans;
    }
};
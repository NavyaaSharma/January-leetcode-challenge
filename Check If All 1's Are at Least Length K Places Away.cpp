#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3616/

#### SOLUTION

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                pos=i;
                break;
            }
        }
        for(int i=pos+1;i<nums.size();i++)
        {
            if(nums[i]==1 && i-pos-1>=k)
            {
                pos=i;
            }
            else if(nums[i]==1 && i-pos-1<k)
            {
                return false;
            }
        }
        return true;
    }
};
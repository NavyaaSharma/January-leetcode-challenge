#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3603/

#### Solution

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(x<nums[0] && x<nums[nums.size()-1])
            return -1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int k=sum-x;
        int len=-1,i=0,j=0,temp=0;
        for(;j<nums.size();j++)
        {
            temp+=nums[j];
            while(temp>k && i<=j)
            {
                temp-=nums[i];
                i++;
            }
            if(temp==k)
            {
                len=max(len,j-i+1);
            }
        }
        if(len!=-1)
        {
            return nums.size()-len;
        }
        return len;
    }
};
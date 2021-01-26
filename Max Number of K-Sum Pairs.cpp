#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3608/

#### SOLUTION

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,vector<int>>m;
        int vis[n];
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            m[nums[i]].push_back(i);
            vis[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==0 && m.find(k-nums[i])!=m.end() && m[k-nums[i]].size()!=0)
            {
                if(nums[i]==k-nums[i] && m[nums[i]].size()==1)
                {
                    continue;
                }
                cnt++;
                m[nums[i]].pop_back();
                int size=m[k-nums[i]].size();
                vis[m[k-nums[i]][size-1]]=1;
                vis[i]=1;
                m[k-nums[i]].pop_back();
                
            }
            
        }
        return cnt;
    }
};
#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3594/

#### SOLUTION

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int i;
        int map[1001]={0};
        for(i=0;i<n;i++){
            map[arr[i]] = 1;
        }
        for(i=0;i<arr[n-1];i++){
            if(k==0)
                return i;
            if(map[i+1]==0)
                k--;
        }
        int p = arr[n-1];
        return p+k;
      
    }
};
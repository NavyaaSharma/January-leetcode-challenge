#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3589/

#### SOLUTION

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int startAt[101];
    
        for (int i = 1; i < 101; i++)
            startAt[i] = -1;
        for (int i = 0, len = pieces.size(); i < len; i++) {
            startAt[pieces[i][0]] = i;
        }
    
        for (int i = 0, len = arr.size(); i < len;) {
            
        
            if (startAt[arr[i]] == -1) 
                return false;
        
            for (int n: pieces[startAt[arr[i]]]) {
                if (n != arr[i]) return false;
                i++;
            }
        }
        return true;
        
    }
};
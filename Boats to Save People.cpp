#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3602/

#### SOLUTION

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int cnt=0;
        sort(people.begin(),people.end());
        for(int i=0,j=people.size()-1;i<=j;)
        {
            if(people[i]+people[j]<=limit)
            {
                cnt++;
                i++;
                j--;
            }
            else
            {
                cnt++;
                j--;
            }
        }
        return cnt;
    }
};
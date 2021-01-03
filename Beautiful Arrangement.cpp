#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3591/

#### SOLUTION

class Solution {
public:
    void calc(int a[],int n,int i,int &ctr)
    {
        if(i==n)
        {
            ctr++;
            return ;
        }
        
        for(int j=i;j<n;j++)
        {
            swap(a[i],a[j]);
            if(a[i]%(i+1)==0 || (i+1)%a[i]==0)
            {
                calc(a,n,i+1,ctr);
            }
            swap(a[i],a[j]);
        }
        
    }
    int countArrangement(int n) {
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        int ctr=0;
        calc(a,n,0,ctr);
        return ctr;
    }
};
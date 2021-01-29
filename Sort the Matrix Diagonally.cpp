#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3614/

#### SOLUTION

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        for(int i=m-1;i>=0;i--)
        {
            vector<int>v;
            for(int j=i,k=0;j<m && k<n;j++,k++)
            {
                v.push_back(mat[j][k]);
            }
            sort(v.begin(),v.end());
            for(int j=i,k=0;j<m && k<n;j++,k++)
            {
                mat[j][k]=v[k];
            }
        }
        for(int j=1;j<n;j++)
        {
            vector<int>v;
            for(int i=0,k=j;i<m && k<n;i++,k++)
            {
                v.push_back(mat[i][k]);
            }
            sort(v.begin(),v.end());
            for(int i=0,k=j;i<m && k<n;i++,k++)
            {
                mat[i][k]=v[i];
            }
        }
        return mat;
    }
};
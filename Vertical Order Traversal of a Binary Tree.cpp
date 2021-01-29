#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/583/week-5-january-29th-january-31st/3621/

#### SOLUTION

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

bool comp(pair<int,int> &p1,pair<int,int> &p2)
    {
        if(p1.first==p2.first)
            return p1.second<p2.second;
        
        else
            return p1.first>p2.first;
            
    }

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        
        map<int,vector<pair<int,int>>>m;
        queue<pair<TreeNode *,pair<int,int>>>q;
        
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty())
        {
            pair<TreeNode *,pair<int,int>>x=q.front();
            TreeNode *temp=x.first;
            pair<int,int>y=x.second;
            int xv=y.first;
            int yv=y.second;
            q.pop();
            m[xv].push_back(make_pair(yv,temp->val));
            
            if(temp->left)
            {
                q.push(make_pair(temp->left,make_pair(xv-1,yv-1))); 
            }
            if(temp->right)
            {
                q.push(make_pair(temp->right,make_pair(xv+1,yv-1))); 
            }
        }
        
        for(auto i:m)
        {
            vector<int>t;
            sort(i.second.begin(),i.second.end(),comp);
            for(int j=0;j<i.second.size();j++)
            {
                t.push_back(i.second[j].second);
            }
            v.push_back(t);
        }
        return v;
    }
};
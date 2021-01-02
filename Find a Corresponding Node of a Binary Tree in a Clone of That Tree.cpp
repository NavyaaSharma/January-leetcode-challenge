#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3590/

#### SOLUTION

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL)
            return NULL;
        if(original==target)
            return cloned;
        TreeNode * lft=getTargetCopy(original->left,cloned->left,target);
        if(lft!=NULL)
            return lft;
        TreeNode * rght=getTargetCopy(original->right,cloned->right,target);
        return rght;
    }
};
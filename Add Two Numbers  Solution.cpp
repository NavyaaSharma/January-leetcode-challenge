#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3601/

#### SOLUTION

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode();
        ListNode* curr=res;
        int s=0;
        while(l1!=NULL||l2!=NULL||s==1)
        {
            int a=(l1!=NULL)?l1->val:0;
            int b=(l2!=NULL)?l2->val:0;
            s=s+a+b;
            curr->next=new ListNode();
            curr=curr->next;
            curr->val=(s%10);
            s/=10;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        return res->next;
    }
};
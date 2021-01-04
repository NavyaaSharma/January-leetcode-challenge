#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3592/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * l3,* ptr;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                ListNode* temp=new ListNode(l1->val);
                if(l3==NULL)
                {
                    l3=temp;
                    ptr=temp;
                }
                else
                {
                    ptr->next=temp;
                    ptr=temp;
                }
                l1=l1->next;
                
            }
            else
            {
                ListNode* temp=new ListNode(l2->val);
                if(l3==NULL)
                {
                    l3=temp;
                    ptr=temp;
                }
                else
                {
                    ptr->next=temp;
                    ptr=temp;
                }
                l2=l2->next;
            }
        }
        while(l1!=NULL)
        {
            ListNode* temp=new ListNode(l1->val);
                if(l3==NULL)
                {
                    l3=temp;
                    ptr=temp;
                }
                else
                {
                    ptr->next=temp;
                    ptr=temp;
                }
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            ListNode* temp=new ListNode(l2->val);
                if(l3==NULL)
                {
                    l3=temp;
                    ptr=temp;
                }
                else
                {
                    ptr->next=temp;
                    ptr=temp;
                }
                l2=l2->next;
        }
        
        return l3;
    }
};
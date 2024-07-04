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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=new ListNode(0);
        ListNode* ans=temp;
    int sm=0; 
    head=head->next;   
    while(head)
    {
        if(head->val==0)
        {
            cout<<sm<<" ";
            ListNode* nd=new ListNode(sm);
            temp->next=nd;
            temp=temp->next;
            sm=0;
        }else
        {
            sm+=head->val;
        }
        head=head->next;
    }
    return ans->next;

        
    }
};
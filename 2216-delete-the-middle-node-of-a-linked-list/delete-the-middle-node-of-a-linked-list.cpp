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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *f=head;
        ListNode *s=head;
        if(head==NULL ||head->next==NULL)
        {
            return NULL;
        }
        while(f!=NULL &&f->next!=NULL)
        {
            if(f->next->next==NULL)
            {
                s=s->next;
                break;
            }
            f=f->next->next;
            s=s->next;
        }
        ListNode *temp=head;
        while(temp->next!=s)
        {
            temp=temp->next;
        }
        if(temp->next->next==NULL)
        {
            temp->next=NULL;
        }else{
        temp->next=temp->next->next;}
        return head;
        
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        if(head==NULL)
        {
            return NULL;
        }
        if(f->next==NULL || f==NULL)
        {
                return NULL;
        }
        while(f!=NULL && f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
            {
                break;
            }   
        }
        if(f==NULL || f->next==NULL)
        {
            return NULL;
        }
        f=head;
        while(s!=f)
        {
            s=s->next;
            f=f->next;
             
             
        }
        return s;
        
        
    }
};
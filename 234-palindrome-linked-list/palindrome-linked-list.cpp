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
    bool isPalindrome(ListNode* head) {
        ListNode *f=head;
        ListNode *s=head;
        ListNode *temp=head;
        int l=0;
        while(temp)
        {
          l++;
          temp=temp->next;
        }
        if(l==2)
        {
            if(head->val==head->next->val)
            {
                return true;
            }
            return false;
        }
        if(l==1)
        {
            return true;
        }
        while(f!=NULL && f->next!=NULL)
        {
            if(f->next->next==NULL)
            {
                s=s->next;
                break;
            }
            f=f->next->next;
            s=s->next;
        }
        ListNode *m=s;
        if(l%2!=0)
        {
           // m=m->next;
        }
        s=NULL;
        ListNode *cur=m;
        ListNode *nxt=NULL;
        ListNode *pre=NULL;
        while(cur)
        {
            nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        ListNode *temp1=pre;
        temp=head;
        while(temp1)
        {
            if(temp1->val!=temp->val)
            {
                return false;
            }
            temp1=temp1->next;
            temp=temp->next;
        }
        return true;

        
    }
};
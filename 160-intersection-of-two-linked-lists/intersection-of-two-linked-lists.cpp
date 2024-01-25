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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode *t1=headA;
        ListNode *t2=headB;

        while(t1)
        {
            l1+=1;
            t1=t1->next;
        }
        while(t2)
        {
            l2+=1;
            t2=t2->next;
        }
        int df=abs(l2-l1);
        t1=headA;
        t2=headB;
        if(l2>l1)
        {
            while(df!=0)
            {
                df--;
                t2=t2->next;
                
            }
            //cout<<t2->val;
        }else
        {    
             while(df!=0)
            {
                df--;
                t1=t1->next;
            }
            //cout<<t1->val;

        }
        while(t1)
        {
            if(t1==t2)
            {
                return t1;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;
        
    }
};
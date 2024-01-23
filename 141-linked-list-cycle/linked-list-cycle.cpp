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
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        ListNode *s1=head;
        ListNode *s2=head;
        if(head==NULL  || head->next==NULL )
        {
            return false;
        }
        while(s2->next!=NULL  && s2->next->next!=NULL)
        {
            s1=s1->next;
            s2=s2->next->next;
            if( s1==s2){
                return true;
            }
        }
        return false;
    }
};
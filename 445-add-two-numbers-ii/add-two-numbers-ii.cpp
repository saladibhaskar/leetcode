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
ListNode* rev(ListNode*node)
{
    ListNode *cur=node;
    ListNode *pre=NULL;
    ListNode* nxt=NULL;
    while(cur)
    {
        nxt=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
    }
    return pre;
}
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) 
    {
        ListNode *l1=rev(t1);
        ListNode *l2=rev(t2);
        int carry=0;
        ListNode* head=new ListNode();
        ListNode*temp=head;
        while(l1!=NULL or l2!=NULL or carry!=0)
        {
            int sum=0;
            if (l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if (l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            int rem=sum%10;

            ListNode* ele=new ListNode(rem);
            temp->next=ele;
            temp=temp->next;
        }
        return rev(head->next);

    }
};
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       ListNode *temp=head;
       while(temp)
       {
           if(temp->next==NULL)
           {
               break;
           }
           ListNode * nxt=temp->next;
           int a=temp->val;
           int b=temp->next->val;
           ListNode *nn=new ListNode(__gcd(a,b));
           nn->next=temp->next;
           temp->next=nn;
           temp=nxt;
            
           
       } 
       return head;
    }
};
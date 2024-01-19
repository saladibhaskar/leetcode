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
        long long int n1=0;
        long long int n2=0;
         
        int carry=0;
        ListNode* head=new ListNode();
        ListNode*temp=head;
        while(l1!=NULL or l2!=NULL or carry!=0){
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
            temp->next=new ListNode(rem);
            
            temp=temp->next;

        }
        return head->next;
        
    }
         

};
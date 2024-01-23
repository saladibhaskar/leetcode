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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int s=0;
        while(temp)
        {
            s++;
            temp=temp->next;

        }
        int ans=0;
        s-=1;
        temp=head;
        while(temp)
        {
             ans+=temp->val*(pow(2,s));
             s--;
             temp=temp->next;
        }
        return ans;
        
    }
};
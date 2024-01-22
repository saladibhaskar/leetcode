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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int i;
        int l=0;
        while(temp)
        {
            l+=1;
            temp=temp->next;
        }        
        temp=head;
        int t=0;

        if(l%2!=0)
        {
            l+=1;
            t=l/2;
        }
        else
        {
            t=l/2+1;
        }
        //cout<<t<<":";
        for(i=1;i<t;i++)
        {
            temp=temp->next;
        }
        cout<<temp->val<<":";
        return temp;
    }
};
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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *temp=head;
        int l=0;
        if(head==NULL)
        {
            return NULL;
        }
         
        while(temp->next!=NULL)
        {
            l++;
            temp=temp->next;
        }
        l+=1;
        if(l==2)
        {
            return head;
        }
        ListNode *temp2=head;
        int i=1;
        //cout<<l<<" ";
        //cout<<temp->val;
        while(i<l && temp2->next!=NULL)
        {
            ListNode *app=new ListNode(temp2->next->val);
            cout<<app->val<<" ";
            temp2->next=temp2->next->next;
            temp2=temp2->next;
            temp->next=app;
            temp=temp->next;
            i+=2; 
        }
        return head;




    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp =head;
        int l=0;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        if(l==1)
        {
            head=NULL;
            return head;
        }
        // if(l==2)
        // {
        //     if(n==1)
        //     {
        //         head->next=NULL;
        //     }else{
        //         head=head->next;
        //     }
        // }
        int r=l-n;
        //cout<<r;
        temp=head;

        for(int i=1;i<r;i++)
        {
            
            temp=temp->next; 
        }
        if(r==0)
        {
            return head->next;
        }
        if(temp->next==NULL)
        {
              temp=NULL;
        }
        else if(temp->next->next==NULL)
        {
            temp->next=NULL;
        }else{
        temp->next=temp->next->next;}
        return head;
        
    }
};
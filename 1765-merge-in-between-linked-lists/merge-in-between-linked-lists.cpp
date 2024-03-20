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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int i=1,c=0;
        while( temp!=NULL  && i<a)
        {
            temp=temp->next;
            i++;
        }
        //cout<<temp->val;
        ListNode*temp1=temp->next;
        temp->next=list2;
        while(i<=b)
        {
            temp1=temp1->next;
            i++;
        }
        cout<<temp1->val;
        while(list2->next!=NULL)
        {
            list2=list2->next;
        }
        list2->next=temp1;
        return list1;

    }
};
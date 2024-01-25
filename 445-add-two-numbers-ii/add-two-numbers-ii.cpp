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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        stack<int >st1;
        stack<int >st2;
        while(l1)
        {
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            st2.push(l2->val);
            l2=l2->next;
        }
        int car=0;
        ListNode *res=new ListNode(-1);
        while(!st1.empty() || !st2.empty()||car!=0)
        {
            int a=0,b=0;
           if(!st1.empty())
           {
           a=st1.top();
           st1.pop();
           }
           if(!st2.empty())
           {
           b=st2.top();
           st2.pop();
           }
           int c=a+b+car;
           car=c/10;
           int s=c%10;
           ListNode *nn=new ListNode(s);
           if(res->val==-1)
           {
               res->val=nn->val;
           }
           else
           {
               nn->next=res;
               res=nn;
           }


        }
        return res;

    }
};
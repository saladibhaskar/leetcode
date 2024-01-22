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
    ListNode* removeNodes(ListNode* head) {
        stack<int>st;
        st.push(head->val);
        ListNode *temp=head;
        temp=temp->next;
        while(temp)
        {
            if(!st.empty())
            {
                if(temp->val<st.top())
                {
                    st.push(temp->val);
                    temp=temp->next;
                }
                else
                {
                    while(temp->val>st.top())
                    {
                        st.pop();
                        if(st.empty())
                        {
                            break;
                        }
                    }
                    st.push(temp->val);
                    temp=temp->next;
                }
            }
        }
        ListNode *res= new ListNode(0);
        ListNode *tem=res;
        stack<int>st2;

        while(!st.empty())
        {
            st2.push(st.top());
            // cout<<st.top()<<" ";
            st.pop();
        }
        while(!st2.empty())
        {
            ListNode *d=new ListNode(st2.top());
            //cout<<st2.top()<<" ";
            tem->next=d;
            tem=tem->next;;
            st2.pop();
        }
        return res->next;

    }
};
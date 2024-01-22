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
        ListNode *res= NULL;
        while(!st.empty())
        {
            ListNode *k=new ListNode(st.top());
            k->next=res;
            res=k;
            st.pop();
        }
        return res;

    }
};
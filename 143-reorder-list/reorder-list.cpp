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
    void reorderList(ListNode* head) {
        vector<ListNode*>v;
        ListNode* temp=head;
        while(temp)
        {
            v.push_back(temp);
            temp=temp->next;
        }
        int i=0,j=v.size()-1;
        temp=head;
        while(i<j)
        {
            temp->next=v[j];
            temp=temp->next;
            j--;
            i++;
            temp->next=v[i];
            if(i==v.size()/2){
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        if(v.size()%2!=0)
        {
            temp->next=v[v.size()/2];
            temp=temp->next;
            temp->next=NULL;
        }

    }
};
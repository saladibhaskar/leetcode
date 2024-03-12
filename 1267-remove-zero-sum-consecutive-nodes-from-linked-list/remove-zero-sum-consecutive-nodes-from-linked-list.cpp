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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int pre=0;
        ListNode* dum=new ListNode(0);
        dum->next=head;
        head=dum;
        map<int,ListNode*>mp;
        ListNode* temp=head;
        while(temp!=NULL){
            pre+=temp->val;
            if(mp.find(pre)==mp.end()){
                mp[pre]=temp;
            }
            else{
                ListNode* st=mp[pre];
                ListNode* tem=st;
                int p=pre;
                while(tem!=temp){
                   
                    tem=tem->next;
                    p+=tem->val;
                    if(tem!=temp){
                         mp.erase(p);
                    }
                }
                st->next=temp->next;
            }
            temp=temp->next;

        }
return head->next;
    }
};
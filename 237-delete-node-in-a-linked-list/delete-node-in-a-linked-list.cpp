/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp1;
      while(node->next!=NULL){

          node->val=node->next->val;
          temp1=node;
          node=node->next;
      }    
      temp1->next=NULL;
    }
};
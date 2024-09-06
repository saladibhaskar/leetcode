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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       if (!head) return nullptr;  // If the list is empty, return nullptr.
        
        set<int> numSet(nums.begin(), nums.end());
        
        // Skip all the nodes at the beginning whose values are in nums.
        while (head && numSet.find(head->val) != numSet.end()) {
            head = head->next;
        }
        
        // If the list becomes empty after removing leading nodes.
        if (!head) return nullptr;
        
        ListNode* cur = head->next;
        ListNode* pre = head;
        
        while (cur) {
            if (numSet.find(cur->val) != numSet.end()) {
                // Skip this node, move to the next one.
                pre->next = cur->next;
            } else {
                // Move pre to cur only if the current node is not removed.
                pre = cur;
            }
            cur = cur->next;
        }
        
        return head;
    }
};
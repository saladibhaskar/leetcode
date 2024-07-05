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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) return {-1, -1};

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = head->next->next;
        std::vector<int> critical_points;
        int index = 1;

        while (next) {
            if ((curr->val > prev->val && curr->val > next->val) || 
                (curr->val < prev->val && curr->val < next->val)) {
                critical_points.push_back(index);
            }
            prev = curr;
            curr = next;
            next = next->next;
            ++index;
        }

        if (critical_points.size() < 2) return {-1, -1};

        int min_distance = INT_MAX;
        int max_distance = 0;

        for (size_t i = 1; i < critical_points.size(); ++i) {
            int distance = critical_points[i] - critical_points[i - 1];
            if (distance < min_distance) {
                min_distance = distance;
            }
        }

        return {min_distance,critical_points[critical_points.size()-1]-critical_points[0] };
    }
};
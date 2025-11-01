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
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        while (freq[head->val] > 0 and head != NULL) {
            // freq[head->val]--;
            head = head->next;
        }
        if (head == NULL) {
            return head;
        }
        ListNode* temp = head;
        while (temp != NULL and temp->next != NULL) {
            if (freq[temp->next->val]) {
                // freq[temp->val]--;
                temp->next = temp->next->next;
                if (temp->next != NULL) {
                    if (!(freq[temp->next->val] > 0)) {
                        temp = temp->next;
                    }
                }
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
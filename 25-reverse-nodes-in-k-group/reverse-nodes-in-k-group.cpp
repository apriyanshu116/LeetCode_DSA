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
    ListNode* reverseKGroup(ListNode* head, int k) {
         vector<int> arr;
        ListNode* temp = head;

        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();

        for (int i = 0; i + k <= n; i += k) {
            reverse(arr.begin() + i, arr.begin() + i + k);
        }

        // rebuild list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int x : arr) {
            curr->next = new ListNode(x);
            curr = curr->next;
        }

        return dummy->next;
        
    }
};
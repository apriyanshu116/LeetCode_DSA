class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> arr;
        ListNode* curr = head;

        while (curr) {
            arr.push_back(curr->val);
            curr = curr->next;
        }

        // Reverse required part
        reverse(arr.begin() + left - 1, arr.begin() + right);

        
        curr = head;
        int i = 0;
        while (curr) {
            curr->val = arr[i++];
            curr = curr->next;
        }

        return head;
    }
};
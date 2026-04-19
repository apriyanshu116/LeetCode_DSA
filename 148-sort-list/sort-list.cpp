class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head) return nullptr;
        
       
        vector<int> v;
        ListNode* curr = head;
        while (curr) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        
        // 2. Sort the values
        sort(v.begin(), v.end());
        
        // 3. Put them back into existing nodes
        curr = head;
        for (int i = 0; i < v.size(); i++) {
            curr->val = v[i];
            curr = curr->next;
        }
        return head;
    }
};

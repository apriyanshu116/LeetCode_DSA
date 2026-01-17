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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        stack<int>s;
        while(fast!=nullptr && fast->next!=nullptr){
        s.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;

        }
        //check when middle element is odd
        if(fast!=nullptr){
            slow=slow->next;
        }
        while(slow!=nullptr){
            if(slow->val!=s.top()){
            return false;
            }
            s.pop();
            slow=slow->next;
        }
        return true;
       

        
    }
};
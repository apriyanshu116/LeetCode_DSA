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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return nullptr;
        int count=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int pos=count-n;
         if (pos == 0) {
            ListNode* todel = head;
            head = head->next;
            delete todel;
            return head;
        }
        temp=head;
        for(int i=1; i<pos;i++){
            temp=temp->next;
        }
       
        ListNode* todel=temp->next;
        temp->next=temp->next->next;
        delete todel;
        
       
        
        return head;
    }
};
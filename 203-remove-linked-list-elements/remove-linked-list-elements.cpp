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
    ListNode* removeElements(ListNode* head, int val) {
        //empty node case
        if(head==nullptr)return nullptr;
        //when  node is not empty
        while(head!=nullptr && head->val==val){
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        //for last node to check null
        ListNode* curr=head;
        while(curr!=nullptr && curr->next!=nullptr){
             if( curr->next->val==val){
                ListNode* todel=curr->next;
                
                curr->next=curr->next->next;
                delete todel;
             }
             else{
                curr=curr->next;
             }
        }
        return head;
          
        
    }
};
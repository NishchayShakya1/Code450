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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            ListNode* todelete = head;
            delete todelete;
            return NULL;
        }
        if(head->next->next == NULL){
            ListNode* todelete = head->next;
            head->next = NULL;
            delete todelete;
            return head;
        }
        
        ListNode* fast = head->next->next;
        ListNode* slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode* todelete = slow->next;
        slow->next = slow->next->next;
        delete todelete;
        return head;
    }
};
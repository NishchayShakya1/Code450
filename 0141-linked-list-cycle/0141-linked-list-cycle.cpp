/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL){
            return false;
        }
        
        if(head->next == NULL){
            return false;
        }
        
        if(head->next->next == NULL){
            return false;
        }
        
        ListNode* Slow = head->next;
        ListNode* Fast = head->next->next;
        
        while(Fast != NULL && Fast->next != NULL){
            Fast = Fast->next->next;
            Slow = Slow->next;
            
            if(Slow == Fast){
                return true;
                break;
            }
        }
        
        return false;
    }
};
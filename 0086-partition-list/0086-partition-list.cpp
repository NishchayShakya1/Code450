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
    ListNode* partition(ListNode* head, int x) {
         ListNode* dummy = new ListNode(0),*prev =dummy,*cur;
        dummy->next = head;
        if(!prev->next)return NULL;
        while(prev->next !=NULL and prev->next->val<x){
            prev=prev->next;
        }       
        cur=prev->next;
        while(cur!=NULL and cur->next!=NULL){
            if(cur->next->val>=x){
                cur=cur->next;
            }
            else{
                ListNode* temp = prev->next;
                prev->next=cur->next;
                cur->next=cur->next->next;
                prev->next->next = temp;
                prev=prev->next;
            }
        }
        return dummy->next;
    }
};
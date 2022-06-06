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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* list1 = headA;
        ListNode* list2 = headB;
        
        int cnt1 = 0,cnt2 = 0;
        
        while(list1->next){
            cnt1++;
            list1 = list1->next;
        }
        
         while(list2->next){
            cnt2++;
            list2= list2->next;
        }
        
        if(list1 != list2){
            return NULL;
        }
        
        int forward1 = max(0, cnt1-cnt2);
        int forward2 = max(0, cnt2-cnt1);
        
        while(forward1 > 0){
            headA = headA->next;
            forward1--;
        }
        
        while(forward2 > 0){
            headB = headB->next;
            forward2--;
        }
        
        while(headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }
        
        return headA;
    }
};
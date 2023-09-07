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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         int n=right-left;
        int arr[n+1];
        ListNode*temp=head;
        for(int i=0;i<left-1;i++){
            temp=temp->next;
        }
         ListNode*div=temp;
        for(int i=0;i<=n;i++){
            
            arr[i]=temp->val;
            temp=temp->next;
        }
         for(int i=0;i<=n;i++){
             
           div->val=arr[n-i];
           
            div=div->next;
        }
      return head;
    }
};
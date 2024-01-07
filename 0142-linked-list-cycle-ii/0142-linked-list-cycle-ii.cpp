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
    ListNode *detectCycle(ListNode *head) {
         ListNode *fast=head;
         ListNode *slow=head;
       
        
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) 
      
            {  
        fast=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
            // if(slow==fast) break;
        }
        return slow;
            }}
            return NULL;
    }
};
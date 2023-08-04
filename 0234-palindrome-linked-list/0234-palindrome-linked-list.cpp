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
        
        ListNode* fast=head;
        ListNode* slow=head;
         ListNode* temp;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode* newhead=slow;
        slow=slow->next;
        newhead->next=NULL;

        while(slow)
        {
            temp =slow->next;
            slow->next=newhead;
            newhead=slow;
            slow=temp;
        }
        
        fast=head;
        slow=newhead;
        
        while(slow&&fast)
        {
            if(fast->val!=slow->val)
                return false;
            else
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return true;
        
        
    }
};
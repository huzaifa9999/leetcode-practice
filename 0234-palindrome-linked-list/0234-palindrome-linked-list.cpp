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
    ListNode *reverse(ListNode* head)
{
    ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode* next;
        
        while(curr)
        {
         next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
        
}
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        ListNode* rev=head;
           ListNode* fast=head;   ListNode* slow=head;
while(fast-> next&&fast->next->next)
{
    fast=fast->next->next;
    slow=slow->next;
}
        slow->next=reverse(slow->next);
       slow=slow->next;
        while(slow!=NULL)
        {
            if(curr->val!=slow->val) return false;
            curr=curr->next;
            slow=slow->next;
        }
        
       
        return true;
        
    }
};
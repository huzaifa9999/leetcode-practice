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
        ListNode* t=head;
          ListNode* h=head;
        
        while(h!=NULL&&h->next!=NULL)
        {
            h=h->next->next;
            t=t->next;
            if(h==t) return true;
        } return false;
    }
};
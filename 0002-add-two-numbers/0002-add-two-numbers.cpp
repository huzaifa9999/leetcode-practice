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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *curr1=l1,*curr2=l2;
        ListNode ans(0);
        ListNode *temp=&ans;
        
        int count =0;
        while(count||curr1||curr2)
        {
            if(curr1)
            {
                count+=curr1->val;
    
            }
             if(curr2)
            {
                count+=curr2->val;
    
            }
            
            temp->next= new ListNode(count%10);
            temp=temp->next;
        
        count/=10;
                if(curr1)curr1=curr1->next;
                       if(curr2)  curr2=curr2->next;
        
        }
        
        return ans.next;
        
        
        
        
        
    }
};
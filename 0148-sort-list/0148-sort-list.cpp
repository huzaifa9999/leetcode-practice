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

ListNode* Mid(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;

}
    
    ListNode* mergedList(ListNode*left,ListNode* right)
    {
        if(left==NULL||right==NULL)
        {
            return (left==NULL)?right:left;
        }
        ListNode *ans=new ListNode(0);
        ListNode* curr=ans;
        
        while(left!=NULL && right!=NULL)
        {
            if(left->val<=right->val)
            {
                curr->next=left;
                left=left->next;
            }
            else if(right->val<left->val)
            {
                curr->next=right;
                right=right->next;
            }
            curr=curr->next;
        }
        
    if(left!=NULL || right!=NULL)
    {
        curr->next=(left==NULL)?right:left;
    }
        return ans->next;
    }
        
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* mid=Mid(head);
  ListNode* newhead=mid->next;
  mid->next=NULL;
        ListNode* left=sortList(head);
        ListNode* right=sortList(newhead);

        return mergedList(left,right);
    }
};
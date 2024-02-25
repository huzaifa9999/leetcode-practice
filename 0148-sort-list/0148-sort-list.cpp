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
    ListNode* sortList(ListNode* head) {
     
        vector<int>arr;
        ListNode* curr= head;
        
        while(curr!=NULL)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        
        sort(arr.begin(),arr.end());
        ListNode*ans=head;
        ListNode* head2=head;
        
     int i=0;
        while(head2!=NULL)
        {
            head2->val=arr[i++];
            head2=head2->next;
        }
        return ans;
    }
};
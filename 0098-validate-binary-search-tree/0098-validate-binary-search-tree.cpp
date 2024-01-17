/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool bound(TreeNode* root,long long int lowerbound,long long int upperbound)
    {
        if(root==NULL) return true;
        if(root->val<=lowerbound||root->val>=upperbound) return false;
      else  return (bound(root->right,root->val,upperbound)&& bound(root->left,lowerbound,root->val));
    }
    
    bool isValidBST(TreeNode* root) {
        long long int min = -1000000000000, max = 1000000000000;
         return bound(root,min,max);
        
    }
};
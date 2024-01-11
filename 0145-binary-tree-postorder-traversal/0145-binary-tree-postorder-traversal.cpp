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
    
    void f(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL) return;
         ans.push_back(root->val);
        f(root->right,ans);
       
        f(root->left,ans);
       
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
     f(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
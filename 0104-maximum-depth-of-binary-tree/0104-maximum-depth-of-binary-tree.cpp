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
   int helper(TreeNode* root,int level)
    {
        if(root==NULL) return 0;
        int left=helper(root->left,level);
        int right=helper(root->right,level);
        level= max(left,right);
        return 1+max(left,right);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
//         queue<pair<TreeNode*,int>>q;
        
//         int ans=1;
//         q.push({root,1});
//         while(!q.empty())
//         {
//         TreeNode* node=q.front().first;
//             int level=q.front().second;
//             q.pop();
//             if(node->left) q.push({node->left,level+1});
//             if(node->right) q.push({node->right,level+1});
//             ans=max(ans,level);
//         }
        
//         return ans;
     return helper(root,0);
    }
};
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
    
    int rec(TreeNode *root,int&d)
    {
        if(root==NULL) return 0;
        
        int l=rec(root->left,d);
        int r=rec(root->right,d);
        d=max(d,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
   int d=0;
        rec(root,d);
        return d;
    }
};
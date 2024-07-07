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
    
int dia(TreeNode* root,int &d)
{
    if(root==NULL) return 0;
    int left=dia(root->left,d);
    int right= dia(root->right,d);
    d= max(d,left+right);
    return 1+max(left,right);
}
    int diameterOfBinaryTree(TreeNode* root) {
        
      if(root==NULL) return 0;
        int d=0;
         dia(root,d);
        return d;
    }
};
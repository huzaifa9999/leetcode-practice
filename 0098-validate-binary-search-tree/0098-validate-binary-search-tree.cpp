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
    
//     bool bound(TreeNode* root,long long int lowerbound,long long int upperbound)
//     {

//     }
    void helper(TreeNode* root, vector<int>&ans)
    {if(root==NULL) return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        // long long int min = -1000000000000, max = 1000000000000;
        //  return bound(root,min,max);
        vector<int>ans;
        helper(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1]) return false;
        }
        return true;
    }
};
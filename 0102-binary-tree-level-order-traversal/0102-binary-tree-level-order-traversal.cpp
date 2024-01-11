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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        queue<pair<TreeNode*,int>>q;
        
        if(root==NULL) return ans;
        q.push({root,0});
 map<int,vector<int>>mp;
        
        while(!q.empty())
        {
            TreeNode* top=q.front().first;
            int level=q.front().second;
            q.pop();
            mp[level].push_back(top->val);
            if(top->left) q.push({top->left,level+1});
            if(top->right)q.push({top->right,level+1});
            
        }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
        return ans;
    }
};
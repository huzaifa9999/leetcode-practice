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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       vector<vector<int>>ans;
        
        if(root==NULL) return ans;
        
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int, map < int, multiset < int >>>mp;
        int coor=0;
    q.push({root,{0,0}});
        
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            
            TreeNode*node=it.first;
            int x=it.second.first;
            int y=it.second.second;
            
            mp[x][y].insert(node->val);
            if(node->left!=NULL) 
            {q.push({node->left,{x-1,y+1}});
            coor=min(y-1,coor);}
            if(node->right!=NULL) q.push({node->right,{x+1,y+1}});
            
            
        }
         // vector<int>temp;
        for (auto p: mp) {
    vector < int > col;
    for (auto q: p.second) {
      col.insert(col.end(), q.second.begin(), q.second.end());
    }
    ans.push_back(col);
  }
  return ans;

                
           
      
        
    }
};
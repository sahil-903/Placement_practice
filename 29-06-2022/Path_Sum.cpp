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
    void TreePath(vector<int>& v, TreeNode* root, int s)
    {
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(s);
            return;
        }
        
        if(root->left)
        {
            TreePath(v,root->left,s+(root->left->val));
        }
        if(root->right)
        {
            TreePath(v,root->right,s+(root->right->val));
        }
        
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        if(root==NULL)
            return false;
        TreePath(v,root,(root->val));
        for(int i=0;i<v.size();i++)
        {
            if(targetSum==v[i])
                return true;
        }
        return false;
    }
};

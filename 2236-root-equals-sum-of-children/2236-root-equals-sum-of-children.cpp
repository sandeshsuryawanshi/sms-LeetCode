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
    
    bool checkTree(TreeNode* root)
    {
        
        
       int sum=root->left->val;
       int sum1=root->right->val;
        
        if(root->val==sum+sum1) 
        {
            return true;
        }
        else
        {
            return false;
        }
      
        
    }
};
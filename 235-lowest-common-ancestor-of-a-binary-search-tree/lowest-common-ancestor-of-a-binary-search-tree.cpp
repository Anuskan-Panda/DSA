/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
        {
            return NULL;
        }
        // if both value of p and q are less the root value, move left
        if(root->val>p->val && root->val>q->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        // if both value of p and q are more the root value, move right
         if(root->val<p->val && root->val<q->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        
       //the moment it spilt as one of them smaller or larger than root value, then return root
       
            return root;
        }
    
};
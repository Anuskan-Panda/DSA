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
bool preorder(TreeNode* root,long long max,long long min)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->val <= min || root->val >= max) //root->val <= min || root->val >= max) and return
    {                                       // truewe can sue it but it wikl not iterate the tree
        return false; 
    }

    return preorder(root->left,root->val,min) && preorder(root->right,max,root->val);

}
    bool isValidBST(TreeNode* root) {
        return preorder(root,LLONG_MAX,LLONG_MIN);
    }
};
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
TreeNode* create(TreeNode* root,vector<int>& preorder,int target)
{
    if(!root)
    {
        TreeNode* temp=new TreeNode(target);
        return temp;
    }

    if(root->val<target)
    {
        root->right=create(root->right,preorder,target);
    }
    if(root->val>target)
    {
        root->left=create(root->left,preorder,target);
    }
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       int n=preorder.size();
       TreeNode* root=NULL;

       for(int i=0;i<n;i++)
       {
        root=create(root,preorder,preorder[i]);
       }
       return root;
    }
};
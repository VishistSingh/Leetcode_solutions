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
TreeNode* create(vector<int>& preorder,int& index,int lower,int higher)
{
     if(index==preorder.size()||preorder[index]<lower||preorder[index]>higher)
     {
        return NULL;
     }
      
      TreeNode* root=new TreeNode(preorder[index++]);
      root->left=create(preorder,index,lower,root->val);
      root->right=create(preorder,index,root->val,higher);

      return root; 


}

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
     return create(preorder,index,INT_MIN,INT_MAX);
    }
};
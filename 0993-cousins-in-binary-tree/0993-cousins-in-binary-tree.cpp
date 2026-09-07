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
int xdep,ydep,xparent,yparent;
void dfs(TreeNode* root,int x,int y,int d,int pvalue)
{
    if(root==NULL)
    return ;
    
    if(root->val==x)
    {
    xdep=d;
    xparent=pvalue;
    return ;
    }
    
    if(root->val==y)
    {
    ydep=d;
    yparent=pvalue;
    return;
    }
   
   dfs(root->left,x,y,d+1,root->val);
   dfs(root->right,x,y,d+1,root->val);
 
}
    bool isCousins(TreeNode* root, int x, int y) {
       if(root->val==x && root->val==y)
       return 0;

       dfs(root,x,y,0,0);

       if(xdep==ydep && xparent!=yparent)
       return 1;

       return 0;
    }
};
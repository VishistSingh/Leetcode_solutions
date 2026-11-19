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
int height(TreeNode* burnnode)
  {
      if(burnnode==NULL)
      return 0;
      
      return 1+max(height(burnnode->left),height(burnnode->right));
  }
  void find(TreeNode* root,int start,TreeNode* &burnnode)
  {
      if(!root)
      return;
      if(root->val==start)
      {
          burnnode=root;
      }
      
      find(root->left,start,burnnode);
      find(root->right,start,burnnode);
      
  }
  int burn(TreeNode* root,int &timer,int start)
  {
      if(!root)
      return 0;
      if(root->val==start)
      {
          return -1;
      }
      int l=burn(root->left,timer,start);
      int r=burn(root->right,timer,start);
      
      if(l<0)
      {
          timer=max(timer,abs(l)+r);
          return l-1;
      }
      if(r<0)
      {
          timer=max(timer,l+abs(r));
          return r-1;
      }
      else return 1+max(l,r);
  }
      
    int amountOfTime(TreeNode* root, int start) {
         int timer=INT_MIN;
       
       burn(root,timer,start);
       TreeNode* burnnode=NULL;
       
       find(root,start,burnnode);
       int h= height(burnnode)-1;
       return max(timer,h);
    }
};
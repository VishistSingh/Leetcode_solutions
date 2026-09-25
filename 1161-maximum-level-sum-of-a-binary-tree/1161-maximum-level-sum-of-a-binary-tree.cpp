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
        queue<TreeNode*> q;
        int n;
        int maxLevel;
    int maxLevelSum(TreeNode* root) {
        if(!root)
        return -1;
        q.push(root);
        TreeNode* temp;
        int maxSum=INT_MIN;
        int j=0;
        while(!q.empty()){
         n=q.size();
         int sum=0;
         j++;
         for(int i=0;i<n;i++){
         temp=q.front();
         sum+=temp->val;
         q.pop();
         if(temp->left) q.push(temp->left);
         if(temp->right) q.push(temp->right);
         }
         if(sum>maxSum){
          maxSum=sum;
          maxLevel=j;}
        }
    return maxLevel;
    }
};
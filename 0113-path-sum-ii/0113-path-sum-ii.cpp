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
void dfs(TreeNode* root,vector<int> p,vector<vector<int>> &ans,int targetSum)
{
    if(root==NULL)
    {
        return;
    }
    p.push_back(root->val);
    targetSum=targetSum-root->val;
    if(root->left==NULL&&root->right==NULL&&targetSum==0)
    {
        ans.push_back(p);
    }
    dfs(root->left,p,ans,targetSum);
        dfs(root->right,p,ans,targetSum);

        p.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> p;
        vector<vector<int>> ans;
        dfs(root,p,ans,targetSum);
        return ans;
    }
};
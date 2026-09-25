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
int ans=0;

    tuple<int,int,int> dfs(TreeNode* root)
    {
        if(root==NULL)
        return{INT_MAX,INT_MIN,0};

        auto[lmin,lmax,lsum]=dfs(root->left);
        auto[rmin,rmax,rsum]=dfs(root->right);

        if(root->val>lmax && root->val <rmin)
        {
            int currsum=root->val+lsum+rsum;

            ans=max(ans,currsum);
            int minval=min(root->val,lmin);
            int maxval=max(root->val,rmax);

            return {minval,maxval,currsum};
        }
        else
        {
            int c1=max(lsum,rsum);
            return{INT_MIN,INT_MAX,c1};
        }
    }
    int maxSumBST(TreeNode* root) {
    
     dfs(root);
     return ans;
    }
};
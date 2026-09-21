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
TreeNode* binary(int start,int end,vector<int>& arr)
{
    if(start>end)
    return  NULL;

    int mid=(start+end)/2;
    TreeNode* ans=new TreeNode(arr[mid]);
    ans->left=binary(start,mid-1,arr);
    ans->right=binary(mid+1,end,arr);
    return ans;
}
void inorder(TreeNode* root,vector<int>& arr)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left,arr);
    arr.push_back(root->val);
    inorder(root->right,arr);
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(root,arr);
        return binary(0,(int)arr.size()-1,arr);

            }
};
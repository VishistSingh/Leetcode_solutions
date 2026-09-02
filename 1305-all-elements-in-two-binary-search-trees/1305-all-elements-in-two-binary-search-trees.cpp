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
void join(vector<int> a,vector<int> b,vector<int>& ans)
{
    int l=0;
    int r=0;

    while(l<a.size()&&r<b.size())
    {
        if(a[l]<=b[r])
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(b[r]);
            r++;
        }
    }
    while(l<a.size())
    {
        ans.push_back(a[l]);
        l++;
    }
    while(r<b.size())
    {
        ans.push_back(b[r]);
        r++;
    }
}
void inorder(TreeNode* root,vector<int>& v)
{   
    if(root==nullptr)
    return ;

    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        vector<int> a;
        vector<int> b;


        inorder(root1,a);
        inorder(root2,b);

        join(a,b,ans);
        return ans;
    }
};
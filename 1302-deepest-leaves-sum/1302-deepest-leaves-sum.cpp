class Solution {
public:
    vector<int> sums;
    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return sums.back();
    }
    void dfs(TreeNode* node, int lvl) {
        if (lvl == sums.size()) 
        sums.push_back(node->val);

        else
         sums[lvl] += node->val;

        if (node->left) dfs(node->left, lvl+1);
        if (node->right) dfs(node->right, lvl+1);
    }
};
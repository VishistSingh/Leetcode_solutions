class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if (root == NULL)
            return ans;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> arr;
            for (int i = 0; i < n; i++) {

                TreeNode* temp = q.front();
                q.pop();

                arr.push_back(temp->val);

                if (temp->left != NULL)
                    q.push(temp->left);

                if (temp->right != NULL)
                    q.push(temp->right);
            }
            ans.push_back(arr);
        }
        return ans;
    }
};
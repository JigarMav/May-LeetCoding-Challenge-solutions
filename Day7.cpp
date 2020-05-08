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
class Solution
{
public:
    bool isCousins(TreeNode *root, int x, int y)
    {
        unordered_map<int, pair<int, int>> m;
        isCousins_util(root, 0, -1, m);
        if (m[x].first == m[y].first)
        {
            return m[x].second != m[y].second;
        }
        return false;
    }
    void isCousins_util(TreeNode *root, int depth, int parent, unordered_map<int, pair<int, int>> &m)
    {
        if (!root)
            return;
        m[root->val] = {depth, parent};
        isCousins_util(root->left, depth + 1, root->val, m);
        isCousins_util(root->right, depth + 1, root->val, m);
    }
};
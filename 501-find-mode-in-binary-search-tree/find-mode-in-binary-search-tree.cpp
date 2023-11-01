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
vector<int> mode;
    int max_count;
    int prev;
    int count;
void inorder(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        inorder(root->left);

        if (prev == -1) {
            prev = root->val;
            count = 1;
        } else if (prev == root->val) {
            count++;
        } else {
            prev = root->val;
            count = 1;
        }

        if (count > max_count) {
            max_count = count;
            mode = {root->val};
        } else if (count == max_count) {
            mode.push_back(root->val);
        }

        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if (root == NULL) {
            return mode;
        }

        mode.clear();
        max_count = 0;
        prev = -1;
        count = 0;

        inorder(root);

        return mode;
    }
};
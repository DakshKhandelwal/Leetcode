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

int goodNod(TreeNode* r, int ma = -10000) {
        return r ? goodNod(r->left, max(ma, r->val)) + goodNod(r->right, max(ma, r->val)) + (r->val >= ma) : 0;
    }

class Solution {
public:
    int goodNodes(TreeNode* root) {
        return goodNod(root,-10000);
    }
};
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
    void Remplir(vector<int>& p, int &sum, TreeNode* root, int targetSum, vector<vector<int>>& c) {
        if (root == NULL) {
            return;
        }
        
        p.push_back(root->val);
        sum += root->val;

        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum) {
                c.push_back(p);
             
            }
        } else {
            Remplir(p, sum, root->left, targetSum, c);
            Remplir(p, sum, root->right, targetSum, c);
        }

        p.pop_back();
        sum -= root->val;
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> c;
        vector<int> m;
        int sum=0;
        Remplir(m, sum, root, targetSum, c);
        return c;
    }
};
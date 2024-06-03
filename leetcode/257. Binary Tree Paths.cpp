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
    void Backtrack(TreeNode* root,string s,vector<string>&v){
        if (root == nullptr) {
            return;
        }
        if(root->left==NULL &&  root->right==NULL){
            s+=to_string(root->val);
            v.push_back(s);
            return ;
        }
        s+=to_string(root->val);
        Backtrack(root->left,s+"->",v);
        Backtrack(root->right,s+"->",v);
        s.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        Backtrack(root,s,v);
        return v;
    }
};
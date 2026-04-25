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
    void inor(TreeNode* root,vector<int>&ans){
        if (root==NULL) return;
        inor(root->left,ans);
        ans.push_back(root->val);
        inor(root->right,ans);

    }
    bool isValidBST(TreeNode* root) {
        vector<int>a;
        inor(root,a);
        int i=0;
        int s=a.size();
        for (int i=0;i<s-1;i++){
            if (a[i+1]<=a[i]) return 0;
        }
        return 1;
    }
};

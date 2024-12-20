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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root == NULL) return root;
        queue<TreeNode*> q;
        vector<int> v;
        q.push(root);
        int lvl=0;
        while(!q.empty()){
            int n=q.size();
            vector<int> temp;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(lvl%2!=0){
                    node->val=v[n-i-1];

                }
                if(node->left){
                    q.push(node->left);
                    temp.push_back(node->left->val);
                }
                if(node->right){
                    q.push(node->right);
                    temp.push_back(node->right->val);
                }
            }
            v=temp;
            lvl++;
        }
        return root;
    
    }
};
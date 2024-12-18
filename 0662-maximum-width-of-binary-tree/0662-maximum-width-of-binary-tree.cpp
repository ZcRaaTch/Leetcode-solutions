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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL ) return 0;
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int n= q.size();
            int first,last;
            int sub=q.front().second;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front().first;
                int indx=q.front().second-sub;
                q.pop();
                if(i==0) first=indx;
                if(i==n-1) last=indx;
                if(temp->left) q.push({temp->left,indx*2 + 1});
                if(temp->right) q.push({temp->right,indx*2+2});

            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};
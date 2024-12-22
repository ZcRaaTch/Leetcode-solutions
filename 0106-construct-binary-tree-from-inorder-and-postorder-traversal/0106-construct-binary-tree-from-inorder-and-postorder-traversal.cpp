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
    TreeNode* helper(vector<int>& in, int inSt,int inEnd,vector<int>& post,int postSt,int postEnd,map<int,int>& mp){
        if(inSt>inEnd || postSt>postEnd) return NULL;
        TreeNode* root =new TreeNode(post[postEnd]);
        int inIndx=mp[post[postEnd]];
        int nums=inIndx-inSt;
        root->left=helper(in,inSt,inIndx-1,post,postSt,postSt+nums-1,mp);
        root->right=helper(in,inIndx+1,inEnd,post,postSt+nums,postEnd-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        if(in.size() != post.size()){
            return NULL;
        }
        
        map<int,int> mp;
        for(int i=0;i<in.size();i++){
            mp[in[i]]=i;
        }
        return helper(in,0,in.size()-1,post,0,post.size()-1,mp);
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markParent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>& parent){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
                parent[temp->left]=temp;
            }
            if(temp->right){
                q.push(temp->right);
                parent[temp->right]=temp;
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        markParent(root,parent);
        set<TreeNode*> visit;
        int distance=0;
        queue<TreeNode*> q;
        q.push(target);
        visit.insert(target);
        while(!q.empty()){
            int n= q.size();
            if(distance==k) break;
            distance++;
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && !visit.contains(curr->left)){
                    q.push(curr->left);
                    visit.insert(curr->left);
                }
                if(curr->right && !visit.contains(curr->right) ){
                    q.push(curr->right);
                    visit.insert(curr->right);
                }
                if(parent[curr] && !visit.contains(parent[curr]) ){
                    q.push(parent[curr]);
                    visit.insert(parent[curr]);
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};
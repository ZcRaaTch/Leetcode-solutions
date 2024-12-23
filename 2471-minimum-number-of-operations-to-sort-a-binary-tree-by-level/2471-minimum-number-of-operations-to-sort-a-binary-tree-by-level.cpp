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
    int helper(vector<int>& lvl){
        vector<int> lvlSorted;
        map<int,int> mp;
        for(int i=0;i<lvl.size();i++){
            mp[lvl[i]]=i;
            lvlSorted.push_back(lvl[i]);
        }
        sort(lvlSorted.begin(),lvlSorted.end());
        int ct=0;
        for(int i=0;i<lvl.size();i++){
            if(lvl[i]!=lvlSorted[i]){
                lvl[mp[lvlSorted[i]]]=lvl[i];
                mp[lvl[i]]=mp[lvlSorted[i]];
                mp[lvlSorted[i]]=i;
                lvl[i]=lvlSorted[i];
                ct++;
            }
        }
        return ct;
    }
    int minimumOperations(TreeNode* root) {
        int ans=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> lvl;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                lvl.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans+=helper(lvl);
        }
        return ans;
    }
};
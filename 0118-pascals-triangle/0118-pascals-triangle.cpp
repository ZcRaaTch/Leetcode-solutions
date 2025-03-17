class Solution {
public:
    vector<int> helper(int row){
        vector<int> ans;
        long long ele=1;
        ans.push_back(ele);
        for(int i=1;i<row;i++){
            ele=ele*(row-i);
            ele=ele/i;
            ans.push_back(ele);
        }
        return ans;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            ans.push_back(helper(i));
        }
        return ans;
    }
};
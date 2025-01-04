class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int row = m.size();
        int col= m[0].size();
        int top=0,left=0,right=col-1,bot=row-1;
        while(top<=bot && left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(m[top][i]);
            }
            top++;
            for(int i=top;i<=bot;i++){
                ans.push_back(m[i][right]);
            }
            right--;
           if(top<=bot){ for(int i=right;i>=left;i--){
                ans.push_back(m[bot][i]);
            }}
            bot--;
            if(left<=right){for(int i=bot;i>=top;i--){
                ans.push_back(m[i][left]);
            }}
            left++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size(), i=0,t=k;
        while(t>0){
            ans.push_back(nums[i]);
            i++;
            t--;

        }
        for(int j=i;j<n;j++){
            int temp=min_element(ans.begin(), ans.end())-ans.begin();
            if(ans[temp]<nums[j]){
                ans.erase(ans.begin()+temp);
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};
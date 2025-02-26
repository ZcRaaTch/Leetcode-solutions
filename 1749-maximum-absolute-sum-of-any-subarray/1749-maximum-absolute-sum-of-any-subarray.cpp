class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans=0,maxSum=0,minSum=0;
        for(auto i:nums){
            maxSum=max(0,i+maxSum);
            minSum=min(0,i+minSum);
            ans=max({ans,maxSum,-minSum});

        }
        return ans;
    }
};
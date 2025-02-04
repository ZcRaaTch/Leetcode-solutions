class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=INT_MIN,curr=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) curr+=nums[i];
            else {
                ans=max(ans,curr);
                curr=nums[i];
            }
        }
        ans=max(ans,curr);
        return ans;
    }
};
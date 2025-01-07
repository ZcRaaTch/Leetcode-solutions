class Solution {
public:
    int helper(vector<int>& nums){
        long long int prev1=nums[0],prev2=0;
        for(int i=1;i<nums.size();i++){
            long long int pick=nums[i];
            if(i>1){
                pick+=prev2;
            }
            long long int notpick=0+prev1;
            long long int curr=max(pick,notpick);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> arr1,arr2;
        for(int i=0;i<n;i++){
            if(i!=0) arr1.push_back(nums[i]);
            if(i!=n-1) arr2.push_back(nums[i]);
        }
        int ans1=helper(arr1);
        int ans2=helper(arr2);
        return max(ans1,ans2);
    }
};
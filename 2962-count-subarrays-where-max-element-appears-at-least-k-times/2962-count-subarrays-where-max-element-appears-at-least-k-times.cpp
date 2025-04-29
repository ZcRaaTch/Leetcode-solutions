class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int max_num = *max_element(nums.begin(),nums.end()),count = 0;
        long long int left = 0,right = 0,ans = 0;
        int n=nums.size();
        while (right<n){
            if(nums[right]==max_num) count++;
            while(count>=k){
                if(nums[left]==max_num) count--;
                left++;
                ans+=n-right;
            }
            right++;

        }
        return ans;
    }
};
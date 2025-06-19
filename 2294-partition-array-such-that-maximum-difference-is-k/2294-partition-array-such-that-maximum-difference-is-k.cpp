class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans=0 , n=nums.size();
        int minval=nums[0],i=1;
        while(i < n){
            if((nums[i]-minval)>k){
                ans++;
                minval=nums[i];
            }
            i++;
        }
        return ans+=1;
    }
};
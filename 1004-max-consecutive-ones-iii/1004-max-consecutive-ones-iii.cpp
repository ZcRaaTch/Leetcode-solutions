class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len=0,l=0,r=0,z=0;
        while(r<nums.size()){
            if(nums[r]==0) z++;
            if(z>k){
                if(nums[l]==0) z--;
                l++;
            }
            if(z<=k) len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};
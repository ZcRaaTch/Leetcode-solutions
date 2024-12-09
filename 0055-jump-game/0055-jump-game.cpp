class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int i=nums.size()-2;
        int minJump=1;
        for(;i>=0;i--){
            if(nums[i]<minJump){
                minJump++;
            }else {
                minJump=1;
            }
        }
        return minJump==1;
    }
};
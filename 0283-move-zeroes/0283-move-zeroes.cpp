class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fl=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[fl]=nums[i];
                fl++;
            }
        }
        
        while(fl<nums.size()){
            nums[fl]=0;
            fl++;
        }
    }
};
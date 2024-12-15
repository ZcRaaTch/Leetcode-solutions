class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);

        if(nums.size()==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];

        int low=2,high=nums.size()-1;

        if(nums[high]!=nums[high-1]) return nums[high];
        high-=2;
        int mid;
        
        while(low<=high){
            mid=(low+high)/2;

            if(mid%2==0){
               if(nums[mid]==nums[mid+1]) low=mid+1;
                else if(nums[mid]==nums[mid-1]) high=mid-1;
                else return nums[mid];
            }else{
                if(nums[mid]==nums[mid+1]){
                    high=mid-1;
                }else if(nums[mid]==nums[mid-1]) low=mid+1;
                else{
                    return nums[mid];
                }
            }
            
        }
        return nums[low];
    }
};
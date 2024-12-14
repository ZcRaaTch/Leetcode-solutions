class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l=0,h=nums.size()-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(nums[mid]==t) return mid;
            if(t<nums[mid]) h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};
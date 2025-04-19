class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        long long int ans=0;
        sort(nums.begin(),nums.end());
        int l=0,h=n-1,uc=0,lc=0;
        while(l<h){
            long long int res=nums[l]+nums[h];
            if(res<=long long(upper)) uc+=(h-l),l++;
            else h--;
        }
        l=0;
        h=n-1;
        while(l<h){
            long long int res=nums[l]+nums[h];
            if(res<long long(lower)) lc+=(h-l),l++;
            else h--;
        }
        return uc-lc;
    }
};
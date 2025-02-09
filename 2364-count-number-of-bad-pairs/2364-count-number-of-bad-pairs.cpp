class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<int,int> mp;
        long c=0;
        for(int i=0;i<nums.size();i++){
            c+=i-mp[i-nums[i]]++;
        }
        return c;
    }
};
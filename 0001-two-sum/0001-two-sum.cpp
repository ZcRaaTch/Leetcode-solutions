class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // ios::sync_with_stdio(false);
        // cout.tie(nullptr);
        // cin.tie(nullptr);

        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()) return {mp[target-nums[i]],i};
            else mp[nums[i]]=i;
        }
        
        return {0,1};
    }
};
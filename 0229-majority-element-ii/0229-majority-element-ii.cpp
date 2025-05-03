class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n=1+nums.size()/3;
        vector<int> ans;
        for(auto i:nums){
            mp[i]++;
            if(mp[i]==n){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
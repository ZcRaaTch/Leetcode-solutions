class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
        set<pair<int,int>> flag;
        for(int i=0;i<nums.size();i++) {flag.insert({nums[i],i});}
        for(auto s:flag){
            if(nums[s.second]==0) continue;
            ans+=s.first;
            nums[s.second]=0;
            if(s.second-1>=0) nums[s.second-1]=0;
            if(s.second+1<nums.size()) nums[s.second+1]=0;
        }
        return ans;
    }
};
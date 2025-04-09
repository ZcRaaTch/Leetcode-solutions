class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int , int> mp;
        int fl=0;
        for(auto n:nums){
            if(n<k) return -1;
            if(n==k) fl=1;
            mp[n]++;
        }
        return mp.size()-fl;
    }
};
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto n: nums){
            if((n>9 && n<100) || (n>999 && n<10000) || n==100000) ans ++;

        }
        return ans;
    }
};
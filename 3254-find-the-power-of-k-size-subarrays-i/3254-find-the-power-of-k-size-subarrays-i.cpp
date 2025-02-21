class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if (k==1) return nums;
        vector<int> res;
        int n=nums.size();
        int l=0,r=0,score=1;
        while(r<n){
            if(r>0 && nums[r-1]+1==nums[r]) {
                score++;
            }
            if(r-l+1>k){
                if(nums[l]+1==nums[l+1]){
                    score--;
                }
                l++;
            }
            if(r-l+1==k){
                if(score==k) res.push_back(nums[r]);
                else res.push_back(-1);
            }
            r++;
        }
        return res;
    }
};
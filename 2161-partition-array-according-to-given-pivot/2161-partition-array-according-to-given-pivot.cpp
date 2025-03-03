class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0,it=0, j;
        for(auto n: nums){
            if(n<pivot) i++;
            else if(n==pivot) it++;
        }
        vector<int> ans(nums.size());
        j=i+it;
        it=i;
        i=0;
        for(auto n:nums){
            if(n<pivot) ans[i++] =n;
            else if(n==pivot) ans[it++]=n;
            else ans[j++]=n;
        }
        return ans;
    }
};
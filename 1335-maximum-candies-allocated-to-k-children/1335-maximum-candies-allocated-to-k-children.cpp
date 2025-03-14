class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low=0,high=1e7;
        while(low<high){
            long sum=0,mid=(low+high+1)/2;
            for(auto& c:candies){
                sum+=c/mid;
            }
            if(k>sum) high=mid-1;
            else low=mid;
        }
        return low;
    }
};
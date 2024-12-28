class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int ans=0,curr=0;
        for(int v:values){
            ans=max(ans,curr+v);
            curr=max(curr,v)-1;
        }
        return ans;
    }
};
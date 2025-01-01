class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxTime=events[0][1],ans=events[0][0];
        for(int i=1;i<events.size();i++){
            if(maxTime<events[i][1]-events[i-1][1]){
                ans=events[i][0];
                maxTime=events[i][1]-events[i-1][1];
            }else if(maxTime==events[i][1]-events[i-1][1]){
                ans=min(ans,events[i][0]);
            }
        }
        return ans;
    }
};
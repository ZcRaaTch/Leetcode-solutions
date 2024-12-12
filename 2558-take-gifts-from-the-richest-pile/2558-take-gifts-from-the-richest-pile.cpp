class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        long long ans=0;
        for(auto g:gifts){
            pq.push(g);
        }
        while(k--){
            pq.push(sqrt(pq.top()));
            pq.pop();
        }
        while(pq.size()>0){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
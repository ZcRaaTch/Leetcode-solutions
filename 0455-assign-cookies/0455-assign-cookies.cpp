class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        ios::sync_with_stdio(false);
        cout.tie(nullptr);
        cin.tie(nullptr);
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};
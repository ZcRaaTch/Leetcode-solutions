class Solution {
public:
    int maxDepth(string s) {
        ios::sync_with_stdio(false);
        cout.tie(nullptr);
        cin.tie(nullptr);

        int curDepth=0,mxDepth=0;
        for(auto c:s){
            if(c=='('){
                curDepth++;
            }
            
            if(c==')'){
                mxDepth=max(curDepth,mxDepth);
                curDepth--;
            }
        }
        return mxDepth;
    }
};
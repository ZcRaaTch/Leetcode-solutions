class Solution {
public:
    int maxScore(string s) {
        int zeros=0,ones=0,ans=INT_MIN;
        for(int i=0;i<s.length();i++){
            if (s[i]=='0') zeros++; else ones++;
            if(i!=s.length()-1) ans=max(ans, zeros-ones);

        }
        return ans +ones;
    }
};
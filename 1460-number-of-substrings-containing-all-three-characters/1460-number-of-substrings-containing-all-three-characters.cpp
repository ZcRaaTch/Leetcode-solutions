class Solution {
public:
    int numberOfSubstrings(string s) {
        int counts[3] ={0,0,0}, ans=0,i=0;
        int n=s.length();
        for(int j=0;j<n;j++){
            ++counts[s[j]-'a'];
            while(counts[0] && counts[1] && counts[2]){
                counts[s[i]-'a']--;
                i++;
            }
            ans+=i;
        }
        return ans;
    }
};
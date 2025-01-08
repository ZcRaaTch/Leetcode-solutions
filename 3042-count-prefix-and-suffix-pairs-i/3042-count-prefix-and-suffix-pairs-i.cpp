class Solution {
public:
 bool isPrefixAndSuffix(const string& str1, const string& str2) {
        int n1 = str1.size(), n2 = str2.size();
        if (n1 > n2)
            return false;
        return str2.substr(0, n1) == str1 && str2.substr(n2 - n1) == str1;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        int n=words.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefixAndSuffix(words[i],words[j])){
                    ans++;
                }
            }
        }
        return ans;
    }
};
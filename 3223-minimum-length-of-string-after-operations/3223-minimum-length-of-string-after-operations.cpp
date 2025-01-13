class Solution {
public:
    int minimumLength(string s) {
    ios::sync_with_stdio(false);
    vector<int>ct(26);
    for(char c:s) ct[c-'a']++;
    int res = 0;
    for(int i=0;i<26;i++){if (ct[i] % 2 != 0) {
    res += 1;  // If ct[i] is odd
    } else if (ct[i] != 0) {
        res += 2;  // If ct[i] is even and non-zero
    } else {
        res += 0;  // If ct[i] is zero
    }}
    return res;
    }
};
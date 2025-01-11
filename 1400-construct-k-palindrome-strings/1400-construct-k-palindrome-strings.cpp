class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(n<k) return false;
        set<char> st;
        for(int i=0;i<n;i++){
            if(st.contains(s[i])){
                st.erase(s[i]);
            }else{
                st.insert(s[i]);
            }
        }
        return st.size()<=k;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int len=0,left=0;
        for(int right=0;right<s.size();right++){
            if(st.contains(s[right])) {
               while(left<right && st.contains(s[right])) {st.erase(s[left]);
                left++;}
            }
            st.insert(s[right]);
            len=max(len,right-left+1);
        }
        return len;
    }
};
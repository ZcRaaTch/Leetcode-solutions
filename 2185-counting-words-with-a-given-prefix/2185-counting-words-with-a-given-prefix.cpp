class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int cou=0;
        for(auto& s:words){
            if(s.substr(0,n)==pref) cou++;
        }
        return cou;
    }
};
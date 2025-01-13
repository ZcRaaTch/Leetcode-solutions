class Solution {
public:
    int minimumLength(string s) {
        int n= s.length();
        if(n<3) return n;
        int ans=0;
        map<char,int> mp;
        for(auto c:s){
            if(mp.find(c)==mp.end()){
                mp[c]=1;
            }else{mp[c]++;}
            if(mp[c]>=3) mp[c]-=2;
        }
        for(auto m:mp) {
            ans+=m.second;
        }
        return ans;
    }
};
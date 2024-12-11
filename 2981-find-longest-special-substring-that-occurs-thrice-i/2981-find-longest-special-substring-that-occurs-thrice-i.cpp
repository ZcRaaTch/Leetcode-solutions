class Solution {
public:
    bool helper(const string& s, int n,int x){
        vector<int> v(26,0);
        int c=0;
        for(int i=0;i<n;i++){
            while(s[c]!=s[i]) {c++;}
            if(i-c+1>=x){v[s[i]-'a']++;}
            if (v[s[i]-'a']>2) return true;
        }
        return false;
    }
    int maximumLength(string s) {
        int n=s.size();
        int low=1,high=n;
        if(!helper(s,n,low)) return -1;
        while(low+1<high){
            int mid=(low+high)/2;
            if(helper(s,n,mid)){low=mid;}
            else high=mid;
        }
        return low;
    }
};
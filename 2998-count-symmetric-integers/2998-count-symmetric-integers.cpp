class Solution {
public:
    bool helper(int num){
        string s=to_string(num);
        int n=s.length();
        if(n%2) return false;
        int left=0, right=0;
        for(int i=0;i<n/2;i++){
            left+=s[i]-'0';
            right+=s[n-i-1]-'0';
        }
        return left==right;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high; i++){
            if(helper(i)) ans++;

        }
        return ans;
    }
};
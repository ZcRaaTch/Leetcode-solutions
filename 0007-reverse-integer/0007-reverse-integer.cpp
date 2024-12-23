class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        vector<int> vec;
        int ans=0, pm=1;
        if(x<0){
            pm=-1;
            x*=-1;
        }
        while(x>0){
            vec.push_back(x%10);
            x=x/10;
        }
        for(int i=0;i<vec.size();i++){
            if(ans > INT_MAX/10) return 0;
            ans *= 10;
            if(ans > INT_MAX - vec[i]) return 0;
            ans += vec[i];
        }
        ans*=pm;
        return ans;
    }
};
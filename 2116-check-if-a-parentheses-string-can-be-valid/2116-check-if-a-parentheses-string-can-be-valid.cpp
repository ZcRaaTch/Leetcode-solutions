class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n= s.length();
        if(n%2==1) return false;
        int bal=0,flip=0;
        for(int i=0;i<n;i++){
            if(locked[i]=='0'){
                flip++;
            }else{
                if(s[i]=='(') bal++;
                else bal--;
            }
            if(bal+flip<0) return false;
        }
        if(bal>flip) return false;
        bal=0;
        flip=0;
        for(int i=n-1;i>=0;i--){
            if(locked[i]=='0'){
                flip++;
            }else{
                if(s[i]==')') bal++;
                else bal--;
            }
            if(bal+flip<0) return false;
        }
        if(bal>flip) return false;
        
        return true;
    }
};
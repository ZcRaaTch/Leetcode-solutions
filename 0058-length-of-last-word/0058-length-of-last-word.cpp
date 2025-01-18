class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        for( int i=len-1;i>=0;i--){
            if(isspace(s[i])){
                len=len-1;
            }
            else{
                break;
            }
            
        }
        int c=0;
        for(int i=len-1;i>=0;i--){
            if(isspace(s[i])){
                break;
            }
            c++;
        }
        return c;
    }
};
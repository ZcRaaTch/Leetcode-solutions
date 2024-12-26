class Solution {
public:
    string largestOddNumber(string num) {
        set<char> ch = {'1','3','5','7','9'};
        int i=num.size()-1;
        while(i>=0){
            if(ch.contains(num[i])){
                break;
            }
            i--;
        }
        return num.substr(0,i+1);
    }
};
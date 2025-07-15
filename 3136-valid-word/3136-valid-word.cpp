class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        int v=0,cons=0;
        string vowels="aeiouAEIOU";
        for(char c: word){
            if(isalpha(c)){
                if(vowels.find(c)!=string::npos){
                    v++;
                }else{
                    cons++;
                }
            } else if(!isdigit(c)){
                return false;
            }
        }
        cout<<v<<"and"<<cons;
        return v>=1 && cons>=1;
    }
};
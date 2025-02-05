class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int curr=0,first=-1,last=-1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(curr!=0)return false;
                if(first!=-1){
                    last=i;
                    if(s1[i]==s2[first] && s1[first]==s2[i]) curr++;
                    else return false;
                }
                else first=i;
            }
            
        }
        if(last==-1 && first!=-1) return false;
        return true;
    }
};
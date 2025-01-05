class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        long n=s.size();
        vector<long> pre(n+1,0);
        for(int i=0;i<shifts.size();i++){
            int st=shifts[i][0],en=shifts[i][1],dir=shifts[i][2];
            if(dir==1){
                pre[st]+=1;
                pre[en+1]-=1;
            }else{
                pre[st]--;
                pre[en+1]++;
            }
        }
        for(int i=0;i<n;i++){
            if(i>0){
                pre[i]+=pre[i-1];
            }
        }
        for(int i=0;i<n;i++){
            int net=(pre[i]%26+26)%26;
            s[i]='a'+(s[i]-'a'+net)%26;
        }
        
        return s;
    }
};
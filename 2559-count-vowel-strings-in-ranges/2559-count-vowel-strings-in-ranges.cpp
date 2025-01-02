class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        set<char> vowels={'a','i','o','e','u'};
        vector<int> ans;
        int n =words.size();
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i];
            if(vowels.contains(words[i].front()) && vowels.contains(words[i].back())){
                pre[i+1]++;
            }
        }
        for(auto& a:queries){
            int l=a[0],r=a[1];
            ans.push_back(pre[r+1]-pre[l]);
        }
        return ans;
    }
};
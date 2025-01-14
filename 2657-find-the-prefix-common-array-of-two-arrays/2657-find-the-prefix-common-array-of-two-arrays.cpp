class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=A.size();
        int cc=0;
        vector<int> freq(51),ans;
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            if(freq[A[i]]==2) cc++;
            freq[B[i]]++;
            if(freq[B[i]]==2) cc++;
            ans.push_back(cc);
        }
        return ans;
    }
};
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        unordered_set<int> s;
        for(auto n:arr){
            if(s.count(2*n)>0||((n%2)==0) && s.count(n/2)>0){
                return true;
            }
            s.insert(n);
        }
        return false;
    }
};
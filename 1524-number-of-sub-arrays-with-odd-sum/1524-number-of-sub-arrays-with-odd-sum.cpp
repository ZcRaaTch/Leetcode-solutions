class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long int ans=0,odd=0,even=1;
        for(int i=0;i<arr.size();i++){
            ans+=arr[i];
            if(ans%2==0){
                even++;
            }else{
                odd++;

            }
        }
        return (odd*even)%1000000007;
    }
};
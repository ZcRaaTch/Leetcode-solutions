class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long int c1=0,c2=0,s1=0,s2=0;
        for(auto n:nums1){
            if(n==0) {c1++;continue;}
            s1+=n;
            
        }
        for(auto n:nums2){
            if(n==0){ c2++;continue;}
            s2+=n;
        }
        if((c1==0 && s1<s2+c2) || (c2==0 && s2<s1+c1)) return -1;
        return max(c1+s1,c2+s2);
    }
};
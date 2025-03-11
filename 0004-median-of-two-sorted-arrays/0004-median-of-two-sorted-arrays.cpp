class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int n1=nums1.size(), n2=nums2.size();
        int i=0,j=0;
        double ans=0.0;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }else if(nums1[i]>nums2[j]){
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            merged.push_back(nums1[i]);
                i++;
        }
        while(j<n2){
            merged.push_back(nums2[j]);
                j++;
        }
        int n=merged.size();
        if(n%2==1){
            int ind=(n-1)/2;
            ans=merged[ind];
        }else{
            int ind=(n/2)-1;
            ans=static_cast<float>(merged[ind]+merged[ind+1])/2;
            // cout<<ind<<merged[ind]<<endl;
        }
        return ans;
    }
};
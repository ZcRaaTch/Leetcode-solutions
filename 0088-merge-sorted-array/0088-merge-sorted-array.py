class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        if m==0:
            for i in range(n):
                nums1[i]=nums2[i]
            return
        if n==0:
            return
        end=m+n-1
        m,n=m-1,n-1
        while(m>=0 and n>=0 and end>=0):
            if nums1[m]>nums2[n]:
                nums1[end]=nums1[m]
                m-=1
            else:
                nums1[end]=nums2[n]
                n-=1
            end-=1
        while(m>=0):
            nums1[end]=nums1[m]
            end-=1
            m-=1
        while(n>=0):
            nums1[end]=nums2[n]
            n-=1
            end-=1
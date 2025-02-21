class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        if k>len(nums):
            return [-1]
        if k==len(nums):
            return [nums[-1]]
        if k==1:
            return nums
        res=[]
        for i in range(len(nums)-k+1):
            j=i+1
            while(j<i+k):
                if nums[j-1]==nums[j]-1:
                    if j==i+k-1:
                        res.append(nums[j])
                else:
                    res.append(-1)
                    break
                j+=1
        return res


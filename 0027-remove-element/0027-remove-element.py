class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        nums.sort()
        fl=0
        ct=nums.count(val)
        for i in range(len(nums)):
            if nums[i]==val:
                fl=i
                break
        del nums[fl:fl+ct]
        return len(nums)


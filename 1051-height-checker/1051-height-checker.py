class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        lst=heights.copy()
        c=0
        lst.sort()
        for i in range(len(heights)):
            if heights[i]!=lst[i]:
                c+=1
        return c


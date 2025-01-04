class Solution:
    def myPow(self, x: float, n: int) -> float:
        ans=1.0
        if n<0:
            n=-1*n
            x=1.0/x
        while n:
            if n%2:
                ans=ans*x
                n=n-1
            else:
                x=x*x
                n=n//2    
        return ans
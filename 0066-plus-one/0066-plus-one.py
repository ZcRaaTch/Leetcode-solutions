class Solution:
    def plusOne(self, d: List[int]) -> List[int]:
        
        def check(d):
            return d[len(d)-1]<9
            #     return True
            # return False
        i=len(d)
        while(i>0):
            if(check(d[0:i])):
                d[i-1]+=1
                return d
            else:
                d[i-1]=0
                i-=1
                if(d[i-1]):
                    continue
                else:
                    d.insert(0,1)
        return d


        
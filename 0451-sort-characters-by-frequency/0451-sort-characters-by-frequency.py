class Solution:
    def frequencySort(self, s: str) -> str:
        mp=Counter(s)
        x=mp.most_common()
        ans=''
        for i in x:
            ans+=i[0]*i[1]
        return ans
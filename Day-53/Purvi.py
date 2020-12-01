class Solution:
    def heightChecker(self, h: List[int]) -> int:
        l=[]
        l[:]=h
        h.sort()
        c=0
        for i in range(len(h)):
            if l[i]!=h[i]:
                c+=1
        return c
class Solution:
    def maxProfit(self, p: List[int]) -> int:
        minp, maxp = 99999, 0
        for i in range(len(p)):
            if(p[i]<minp):
                minp = p[i]
            elif(p[i]-minp>maxp):
                maxp = p[i]-minp
        return maxp
class Solution:
    def transpose(self, A: List[List[int]]) -> List[List[int]]:
        ans = []
        for i in range(len(A[0])):
            a=[]
            for j in range(len(A)):
                a.append(A[j][i])
            ans.append(a)
        return ans
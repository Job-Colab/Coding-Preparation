class Solution:
    def transpose(self, A: List[List[int]]) -> List[List[int]]:
        result = [[A[j][i] for j in range(len(A))] for i in range(len(A[0]))]
        return result
        

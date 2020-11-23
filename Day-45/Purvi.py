class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        l1, l2=[], []
        for i in range(n):
            l1.append(nums[i])
            l2.append(nums[n+i])
        ans=[]
        for i in range(n):
            ans.append(l1[i])
            ans.append(l2[i])
        return ans
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        s=0
        ans=[]
        for i in range(len(nums)):
            s+=nums[i]
            ans.append(s)
        return ans
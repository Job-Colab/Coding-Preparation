class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        s=0
        for i in range(len(nums)-1):
            if(i%2==0):
                s+=min(nums[i], nums[i+1])
        return s
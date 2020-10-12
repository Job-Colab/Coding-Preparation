class Solution:
    def singleNumber(self, nums):
        self.nums = nums
        result  = 0
        for i in range(len(self.nums)):
            result = result ^ self.nums[i]
        return result
if __name__ == '__main__':
    obb = Solution()
    nums = list(map(int, input().strip(' []').split(',')))
    print(obb.singleNumber(nums))

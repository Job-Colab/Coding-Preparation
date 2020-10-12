def singleNumber(nums):
    res=0
    for i in nums:
        res = res^i
    return res

a = list(map(int, input().split()))
print(singleNumber(a))
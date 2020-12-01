class Solution:
    def findLucky(self, arr: List[int]) -> int:
        arr.sort(reverse=True)
        for i in arr:
            if(i==arr.count(i)):
                return i
        return -1
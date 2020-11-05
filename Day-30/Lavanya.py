class Solution(object):
    def countNegatives(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        c=0
        for item in grid:
            for i in item:
                if i < 0:
                    c+=1
        return c

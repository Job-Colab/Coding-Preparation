class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        self.stones = sorted(stones)
        for i in range(len(self.stones)):
            try:
                if(self.stones[-1] == self.stones[-2] ):
                    self.stones.pop()
                    self.stones.pop()
                if(self.stones[-1] > self.stones[-2]):
                    a = self.stones[-1] - self.stones[-2]
                    self.stones.pop()
                    self.stones.pop()
                    self.stones.append(a)
                    self.stones = sorted (self.stones)
            except IndexError:
                pass
        try:
            return(self.stones[0])
        except IndexError:  
            return(0)

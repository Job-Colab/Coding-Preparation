class Solution:
    def twosum(self,l,target):
        self.l = l
        self.target = target
        for i in range(len(l)):
            try :
                a = l.index(target-l[i])
            except ValueError:
                continue
        return(sorted([i,a]))
if __name__ == '__main__':
    obb=Solution()
    l = [3,3]##list(map(int,input().split()))
    target = 6##int(input())
    print(obb.twosum(l,target))

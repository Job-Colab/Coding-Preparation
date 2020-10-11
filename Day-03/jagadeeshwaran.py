class Solution:
    def solve(self,s):
        self.s = s
        if(self.s[-2 : ] == 'am' and s[ : 2] == '12'):
            print('00:%s'%self.s[ 3 : 5])
        elif(self.s[-2 : ] == 'pm' and s[ : 2] == '12'):
            print('12:%s'%self.s[ 3 : 5])
        elif(self.s[-2 : ] == 'am'):
            print(self.s[ : 5])
        elif(self.s[-2 : ] == 'pm'):
            print('%s:%s'%(12+int(self.s[ : 2]),self.s[ 3 : 5]))
            
if __name__  == '__main__' :
    s=input()
    obb=Solution()
    obb.solve(s)

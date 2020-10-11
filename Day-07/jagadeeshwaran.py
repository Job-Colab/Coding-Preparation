class Solution:
    def longestCommonPrefix(self, strs):
        a=''
        self.strs = strs
        for i in range(len(strs)):
            for j in range(1,len(strs[0])+1):
                try:
                    if(strs[i][:j] == strs[i+1][:j]):
                        a = strs[i][:j]
                    else:
                        break
                except IndexError:
                    pass
            
        return(a)            
if __name__ == '__main__':
    obb=Solution()
    strs = ["flower","flow","flight"]#list(input().split()))
    print(""" "%s" """%obb.longestCommonPrefix(strs))

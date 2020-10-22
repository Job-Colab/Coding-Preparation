class Solution:
    def minOperations(self, l: List[str]) -> int:
        curr = 0
        for i in range(len(l)):
            if(l[i]=="../"):
                if(curr!=0):
                    curr-=1
            elif(l[i]=="x/"):
                curr+=1
            elif(l[i]=="./"):
                continue
            else:
                curr+=1
        return curr
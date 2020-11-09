class Solution:
    def maximum69Number (self, num: int) -> int:
        a=[]
        dig=0
        while(num):
            a.append(int(num%10))
            dig=dig+1
            num=int(num/10)

        for i in reversed(range(dig)):
            if(a[i]==6):
                a[i]=9
                break
        ans=0
        for i in range(dig):
            ans+=a[i]*pow(10,i)
        return ans
                
            
        
            
class Solution:
    def defangIPaddr(self, address: str) -> str:
        ans = ''
        for i in address:
            if i == ".":
                ans+="[.]"
                continue   
            ans+=i
        return ans

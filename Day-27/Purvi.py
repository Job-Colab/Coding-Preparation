class Solution:
    def judgeCircle(self, code: str) -> bool:
        x, y=0, 0
        for i in range(0, len(code)):
            if(code[i]=='l' or code[i]=='L'):
                x=x-1
            elif(code[i]=='r' or code[i]=='R'):
                x=x+1
            elif(code[i]=='u' or code[i]=='U'):
                y=y+1
            elif(code[i]=='d' or code[i]=='D'):
                y=y-1
        if(x==0 and y==0):
            return True
        return False
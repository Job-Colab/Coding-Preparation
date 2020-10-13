import sys
s = [2,7,4,1,8,1]
s.sort(reverse=True)

for i in range(len(s)-1):
    diff =s[0]-s[1]
    if(diff!=0):
        s[0]=abs(s[0]-s[1])
        s.pop(1)
        if(len(s)==1):
            print(s[0])
            sys.exit()
    else:
        s.pop(1)
        s.pop(0)
        if(len(s)==0):
            print(0)
            sys.exit()
        if(len(s)==1):
            print(s[0])
            sys.exit()


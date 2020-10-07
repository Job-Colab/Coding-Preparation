class Solution:
    def solve(self, s):
        
        lp=s[5:]
        fp=s[:2]
        cp=s[3:5]
        if(lp=="am"):
           if(fp=="12"):
              return "00:"+cp
           else:
              return s[0:5]
        else:
           if(s[0:5]=="12:00"):
              return s[0:5]
           else:
               if(int(fp)==12):
                   fp=fp
               else:
                   fp=int(fp)+12
               s=str(fp)+":"+str(cp)
               return s
        

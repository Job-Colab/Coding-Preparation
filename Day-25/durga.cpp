class Solution {
public:
    int lengthOfLastWord(string s) {
      int len=s.size()-1,c=0;
        for(int i=len;i>=0;i--)
        {
           if(s[i]==' ' && c>0)
            {
                return c;
            }
            
                if(s[i]!=' ')
                {
                c+=1;
                }
            
        }
        return c;
        
    }
};

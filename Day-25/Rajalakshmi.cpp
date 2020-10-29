class Solution {
public:
    int lengthOfLastWord(string s) {
      int i,num=s.size()-1,c=0;
        if(s=="")
            return 0;
        while(s[num]==' ')
        {
            num--;
        }
      for(i=num;s[i]!=' ';i--)
      {
          c++;
          if(s[i]=='\0')
              return c-1;
      }
      return c;
    }
};
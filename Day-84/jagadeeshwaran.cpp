class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int a = 0,b = 0;
           for(int i = 0 ; i < N ; i++)
           {
               if(S[i] == 'R')
               {
                   a = a+1;
               }
               else
               {
                   b = b+1;
               }
           }
           if(a < b)
           {
               return(a);
           }
           else if(a == b)
           {
               return(a);
           }
           else
           {
               return(b);
           }
    }
};

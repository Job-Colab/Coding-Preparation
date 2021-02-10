
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
       int swapIt = 0;
       for(int i = 0 ; i < S.length() ; ++i)
       {
           if(S[i] == 'R')
           {
               swap(S[swapIt++] , S[i]);
           }
       }
      return swapIt > S.length() - swapIt ? S.length() - swapIt : swapIt ;
       
       }
       
};

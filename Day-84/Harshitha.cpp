
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
/*//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
       int countRed = 0, countGreen = 0 ;
       for(int i = 0 ; i < S.length() ; ++i)
       {
           if(S[i] == 'R')
           {
               ++countRed;
           }
           else
           {
               ++countGreen;
           }
       }
      return countRed > countGreen ? countGreen : countRed ;
       
       }
       
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  // } Driver Code Ends
*/

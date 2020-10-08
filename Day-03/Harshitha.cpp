#include "solution.hpp"
using namespace std;

class Solution {
    public:
    string solve(string s)
    {
     string t24;
       for(int i = 0 ; i < 5 ; i++)
       {
           t24 += s[i];
       }
       int one = int(s[0]) - '0';
       int two = int(s[1]) - '0';
    
      int h = one * 10 + two;
       
       
       if(s[5] == 'a')
       {
           if(h == 12)
           {
              t24[0] = '0';
              t24[1] ='0';
           }
       }
       
       if(s[5] == 'p')
       {
           if(h == 12)
           {
               t24[0] = '1';
               t24[1] = '2';
           }
           else
           {
               h = h + 12;
               
               t24[0] = char(h/10) + '0'; //converting int to char
               t24[1] = char(h % 10) + '0';
               
               
           }
       }
       return t24;
    }
    
    
};


//Ref SOln

/*//convert civil time to military time

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string t24 ;
       int one = int(s[0]) - '0'; // 49 - 48
       int two = int(s[1]) - '0';
    
      int h = one * 10 + two;
       for(int i = 0 ; i < 5 ; i++)
       {
           t24 += s[i];
       }
       
       if(s[5] == 'a')
       {
           if(h == 12)
           {
              t24[0] = '0';
              t24[1] ='0';
           }
       }
       
       if(s[5] == 'p')
       {
           if(h == 12)
           {
               t24[0] = '1';
               t24[1] = '2';
           }
           else
           {
               h = h + 12;
               
               //int x = '0' + '4'; int addition changing to character :)
               //char y = '1' + '5';
               //cout<<y<<'\n';
               t24[0] = char(h/10) + '0'; // 1 - 0 (int --> char)
               t24[1] = char(h % 10) + '0';
              
            cout<<t24.length()<<'\n';
           }
       }
       cout<<t24<<'\n';
}*/

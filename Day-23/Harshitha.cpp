//Roman to integer

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char , int>inRoman = 
    {
    {'I', 1} ,
     {'V' , 5} ,
      {'X' , 10},
       {'L' , 50},
        {'C' , 100},
         { 'D' , 500},
          {'M',  1000}
    };

    int size = s.length();
    int ans = 0;

    int temp = inRoman[s[size-1]]; // key value of the char in position s[size-1]
    ans += inRoman[s[size-1]];

    for(int i = size -1 ; i > 0 ; i--)
    {
        
        if(inRoman[s[i - 1]] >= temp)
        {
           temp = inRoman[s[i - 1]];
           ans += inRoman[s[i - 1]];
        }
        else
        {
            ans -= inRoman[s[i - 1]];
        }
        
        
    }
    cout<<ans<<'\n';
    

    

}

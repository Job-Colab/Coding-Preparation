
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool judgeCircle(string moves)
    {
        int x = 0 , y = 0; // u = 0 1 ,d = 0 -1 , r = 1 0 , l = -1 , 1
        
        for(auto i : moves)
        {
            if(i == 'U') y++;
            else if(i == 'D')y--;
            else if(i == 'R')x++;
            else if(i == 'L')x--;

        }
        return x == 0 && y == 0;
    }
    
};

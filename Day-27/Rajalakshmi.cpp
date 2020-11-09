class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0,i;
        for(i=0;moves[i]!='\0';i++)
        {
            if(moves[i]=='U')
                y++;
            if(moves[i]=='D')
                y--;
            if(moves[i]=='L')
                x--;
            if(moves[i]=='R')
                x++;
        }
        if(x==0 && y==0 )
            return true;
        else
            return false;           
            
        }
    };
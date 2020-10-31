class Solution {
public:
    bool judgeCircle(string moves) {
        int l=moves.size(),ans=0;
        for(int i=0;i<l;i++)
        {
            if(moves[i]=='U')
            {
                ans+=1;
            }
            else if(moves[i]=='D')
            {
                ans-=1;
            }
            else if(moves[i]=='R')
            {
               ans+=3; 
            }
            else
            {
                ans-=3;
            }
            
        }
        if(ans==0)
        {
            return true;
        }
        else
        {
            
            return false;
        }
        
    }
};

class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int>changed;
        changed = heights;
        sort(heights.begin() , heights.end());
        
        int move = 0;
        
        for(int i = 0 ; i < heights.size(); ++i)
        {
            if(abs(heights[i] - changed[i]) != 0)
                move++;
        }
        return move;
        
    }
};
// :) 

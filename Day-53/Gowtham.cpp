class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int sorted[heights.size()];
        int temp,moved = 0;
        
        for(int k=0; k < heights.size(); k++)
            sorted[k] = heights[k];
                
        
        for(int i=0; i < heights.size(); i++)
            for(int j=0; j < heights.size()-i-1; j++)
                if(sorted[j] > sorted[j+1]){
                    
                temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
                    
                }
          
        for(int l=0; l < heights.size(); l++)
            if(heights[l] != sorted[l])
                moved++;
                
        return moved;
        
    }
};

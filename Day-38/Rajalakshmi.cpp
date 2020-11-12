class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,j,max=0,min=10000;
        for(i=0;i<prices.size();i++)
        {
          
                if(prices[i]<min)
                    min = prices[i];
                else if(prices[i] - min > max)
                    max = prices[i] - min;

         
        }
        return max;
    }
};
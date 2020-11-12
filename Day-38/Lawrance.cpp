class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() || prices.size() == 1) return 0;
        int minPrice = INT_MAX;
        int max = 0;
        for(int price : prices) {
            if(price < minPrice) {
                minPrice = price;
            }
            else if(price - minPrice > max) {
                max = price - minPrice;
            }
        }
        return max;
    }
};

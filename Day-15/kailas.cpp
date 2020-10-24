class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int temp;
        bool flag;
        for(auto i=0;i<prices.size();i++){
            if(flag==0&&i>0){
                ans.push_back(prices[i-1]);
            }
            flag=0;
            for(auto j =i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    temp=prices[i]-prices[j];
                    ans.push_back(temp);
                    flag=1;
                    break;
                }
            }
        }
        ans.push_back(prices.back());
        return ans;
    }
};

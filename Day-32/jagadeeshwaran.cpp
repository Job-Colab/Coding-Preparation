class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),true);
        int max = *max_element(candies.begin(), candies.end());
        for(int i = 0 ; i < candies.size() ; i++)
        {
            if(extraCandies + candies.at(i) < max )
            {
                ans[i] = false;
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(), true);
        int maxVal = *max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++) {
            if(candies.at(i) + extraCandies < maxVal) {
                ans[i] = false;
            }
        }
        return ans;
    }
};

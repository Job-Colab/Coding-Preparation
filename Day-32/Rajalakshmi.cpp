class Solution {
public:
    int max(vector<int> candies)
    {
        int i,max=candies[0];
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]>max)
                max=candies[i];
        }
        return max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int i,m;
        m=max(candies);
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=m)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
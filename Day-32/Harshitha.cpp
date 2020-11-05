class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool>largeCandies(candies.size());
        
        for(int i = 0 ; i < candies.size() ; i++)
        {
            candies[i] += extraCandies;
            int maxi = *max_element(candies.begin() , candies.end());
           // cout<<maxi<<'\n'
            if(maxi == candies[i])
            {
                largeCandies[i] = true;
            } 
            else
            {
                largeCandies[i] = false;
            }
            candies[i] -= abs(extraCandies);
        }
        return largeCandies;
    }
};
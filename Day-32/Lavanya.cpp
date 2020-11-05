class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> original = candies;
        vector<bool> ans;
        sort(candies.begin(),candies.end());
        int max=candies[candies.size()-1];
        for(int i=0;i<original.size();i++){
            if(original[i]+extraCandies >=max){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};

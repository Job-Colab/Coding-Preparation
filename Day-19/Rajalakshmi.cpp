class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size(),i;
        vector<int> dp;
        dp.push_back(nums[0]);
        for(i=1;i<n;i++)
            dp.push_back(dp[i-1]+nums[i]);
        return dp;
    }
};
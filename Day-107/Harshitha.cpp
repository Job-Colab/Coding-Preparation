int solve(vector<int>& nums) {
    int maxi = *max_element(nums.begin(), nums.end());
    int mini = *min_element(nums.begin(), nums.end());

    return maxi - mini;
}

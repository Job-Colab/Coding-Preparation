int solve(vector<int>& nums) {
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i : nums) {
        maxi = max(maxi, i);
        mini = min(mini, i);
    }
    return maxi - mini;
}

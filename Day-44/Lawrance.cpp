int solve(vector<int>& nums) {
    int ans = 0;
    int n = nums.size();
    int maxElem = -1;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        maxElem = max(maxElem, nums.at(i) + (n - i));
        nums.at(i) += n;
    }
    for(int i : nums) {
        if(i >= maxElem) ans++;
    }
    return ans;
}

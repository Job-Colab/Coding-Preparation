int solve(vector<int>& prices, int k) {
    int ans = 0;
    sort(prices.begin(), prices.end());
    for(int i : prices) {
        k -= i;
        if(k < 0) break;
        else ++ans;
    }
    return ans;
}

// This can be further optimized by using quickselect algorithm

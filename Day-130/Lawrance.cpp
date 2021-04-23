int solve(vector<int> &arr) {
    int n = arr.size();
    int d = (arr.back() - arr.front()) / n;
    int num = arr.front();
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] - num != d) {
            ans = num + d;
            return ans;
        }
        num = arr[i];
    }
    return arr.front();
}

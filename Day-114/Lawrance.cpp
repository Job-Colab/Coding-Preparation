void miniMaxSum(vector<int> arr) {
    long long sum = 0;
    for(int i : arr) {
        sum += i;
    }
    long long maxVal = LONG_MIN;
    long long minVal = LONG_MAX;
    for(int i : arr) {
        maxVal = max(maxVal, sum - i);
        minVal = min(minVal, sum - i);
    }
    cout << minVal << " " << maxVal << endl;
}

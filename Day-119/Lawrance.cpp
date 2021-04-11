bool solve(int n) {
    unordered_set<int> arr;
    bool ans = false;
    while(true) {
        long sumNow = 0;
        while(n != 0) {
            int digit = n % 10;
            n /= 10;
            sumNow += (digit * digit);
        }
        if(sumNow == 1) {
            ans = true;
            break;
        }
        auto it = arr.find(sumNow);
        if(it == arr.end()) {
            arr.insert(sumNow);
        }
        else {
            break;
        }
        n = sumNow;
    }
    return ans;
}

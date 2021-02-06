#include <bits/stdc++.h>
using namespace std;

int formNumber(const vector<int>& ref, bool sign) {
    int num = 0;
    for(int i : ref) {
        num = (num * 10) + i;
    }
    return (sign) ? num : num * -1;
}


int solve(int num) {
    bool sign = (num > 0);
    if(num < 0) {
        num *= -1;
    }
    vector<int> arr;
    while(num != 0) {
        arr.push_back(num % 10);
        num /= 10;
    }
    reverse(arr.begin(), arr.end());
    arr.push_back(5);
    int ans = formNumber(arr, sign);
    int i = arr.size() - 1;
    while (i > 0) {
        swap(arr[i-1], arr[i]);
        int number = formNumber(arr, sign);
        ans = max(number, ans);
        --i;
    }
    return ans;
}

int main() {
    int num;
    cin >> num;
    cout << solve(num) << endl;
    return 0;
}






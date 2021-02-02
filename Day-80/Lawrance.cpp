#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int pivot = ( n % 2 == 0) ? ( (n - 1) / 2) : n / 2;
        int i = 0;
        int *ans = new int[n];
        while (pivot >= 0 && pivot <= n - 1) {
            ans[pivot] = arr[i];
            if(i % 2 == 0) {
                pivot += (i + 1);
            }
            else {
                pivot -= (i + 1);
            }
            ++i;
        }
        for(i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

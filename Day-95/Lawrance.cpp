#include <bits/stdc++.h>
using namespace std;

int main() {
    while( true ) {
        int n;
        cin >> n;
        if(n != -1) {
            pair<int, int> *arr = new pair<int, int>[n];
            for(int i = 0; i < n; i++) {
                int one;
                int two;
                cin >> one >> two;
                arr[i].first = one;
                arr[i].second = two;
            }
            int ans = 0;
            for(int i = 0; i < n; i++) {
                if(i == 0) 
                    ans += (arr[i].first * arr[i].second);
                else 
                    ans += (arr[i].first * (arr[i].second - arr[i - 1].second));
            }
            cout << ans << " miles" << endl;
        }
        else break;
    }
    return 0;
}

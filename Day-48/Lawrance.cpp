#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int temp = a;
    while(a >= b) {
        int num = a % b;
        ans += (a / b);
        a /= b;
        a += num;
    }
    ans += temp;
    cout << ans << endl;
    return 0;
}

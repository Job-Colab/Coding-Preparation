#include <bits/stdc++.h>
using namespace std;

int RedOrGreen(int n, string s) {
    int pointer = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            swap(s[pointer++], s[i]);
        }
    }
    int red = pointer;
    int green = n - pointer;
    return (red > green) ? green : red;
}

int main() {
    int n;
    string str;
    cin >> n >> str;
    cout << RedOrGreen(n, str) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int atoi(string str) {
    int number = 0;
    bool sign = false;
    if(str[0] == '-') {
        sign = true;
    }
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '-' && i == 0) continue;
        if(str[i] >= '0' && str[i] <= '9') {
            int temp = str[i] - '0';
            number = (number * 10) + temp;
        }
        else {
            number = -1;
        }
    }
    return (sign) ? -1 * number : number;
}

int main() {
    string str;
    cin >> str;
    cout << atoi(str) << endl;
    return 0;
}

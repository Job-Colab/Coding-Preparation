#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    unordered_set<int> days;
    int n;
    cin >> n;
    while(n--) {
        int one;
        int two;
        cin >> one >> two;
        for(int i = one; i <= two; i++) {
            days.insert(i);
        }
    }
    cout << days.size() << endl;
    return 0;
}

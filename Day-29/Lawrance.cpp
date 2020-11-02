#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int base;
        cin >> base;
        if(base <= 2) cout << 0 << endl;
        else {
            base = base - 2;
            base /= 2;
            cout << ( base * (base + 1) ) / 2 << endl;
        }
    }
    return 0;
}

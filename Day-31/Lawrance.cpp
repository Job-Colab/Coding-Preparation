#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n;
    cin >> n;
    long long res = ( n * (n + 1)) / 2;
    long long temp;
    for(long i = 0; i < n - 1; i++) {
      cin >> temp;
      res -= temp;
    }
    cout << res << endl;
  }
}

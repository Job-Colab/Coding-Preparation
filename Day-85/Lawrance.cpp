#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while( t-- ) {
        int ans = 0;
        string s;
        cin >> s;
        deque<char> st;
        for(auto i : s) {
            if(!st.empty() && st.back() == '{' && i == '}') {
                st.pop_back();
            }
            else {
                st.push_back(i);
            }
        }
        if(st.size() % 2) {
            ans = -1;
        }
        else {
            while(!st.empty()) {
                if((st.front() == '}' && st[1] == '}') ||  (st.front() == '{' && st[1] == '{' )) {
                    ++ans;
                }
                else {
                    ans += 2;
                }
                st.pop_front();
                st.pop_front();
            }
        }
        cout << ans << endl;
    }
    return 0;
}

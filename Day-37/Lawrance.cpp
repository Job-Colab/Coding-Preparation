#include <bits/stdc++.h>
using namespace std;

int main() {
    while(true) {
        int n;
        int m;
        cin >> n >> m;
        if(n == 0 || m == 0) return 0;
        vector<pair<int, int> >pairs;
        while(n--) {
            int source;
            int destination;
            int start;
            int duration;
            cin >> source >> destination >> start >> duration;
            pairs.push_back({start, start + duration});
        }
        while (m--) {
            int result = 0;
            int queryStart;
            int queryEnd;
            cin >> queryStart >> queryEnd;
            queryEnd += queryStart;
            for(auto i : pairs) {
               if(max(i.first, queryStart) < min(i.second, queryEnd)) {
                   ++result;
               }
            }
            cout << result << endl;
        }
    }
}

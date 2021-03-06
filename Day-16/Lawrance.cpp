#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int m;
        cin >> n >> m;
        vector<int> *arr = new vector<int>[n + 1];
        int *degree = new int[n + 1]{0};
        int maxDegree = 0;
        while(m--) {
            int i;
            int j;
            cin >> i >> j;
            arr[i].push_back(j);
            arr[j].push_back(i);
            degree[i]++;
            degree[j]++;
            maxDegree = max(maxDegree, max(degree[i], degree[j]));
        }
        if(maxDegree == 2) {
            for(int i = 1; i <= n; i++) {
                if(degree[i] == 2) {
                    int vectexOne = arr[i][0];
                    int vectexTwo = arr[i][1];
                    
                    for(int v : arr[vectexOne]) {
                        if(v == vectexTwo) {
                            maxDegree = 3;
                            break;
                        }
                    }
                }
            }
        }
        cout << maxDegree << endl;
    }
    return 0;
}

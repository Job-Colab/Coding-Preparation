#include <bits/stdc++.h>
using namespace std;

int getColumnSum(int k, vector<vector<int> > &matrix, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += matrix[k][i];
    }
    return sum;
}

int getRowSum(int k, vector<vector<int> > &matrix, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += matrix[i][k];
    }
    return sum;
}

int findMinOperation(vector<vector<int> >& matrix, int n) {
    int minOperations = 0;
    int maxValue = 0;
    for(int i = 0; i < n; i++) {
        maxValue = max(max(getColumnSum(i, matrix, n), getRowSum(i, matrix, n)), maxValue);
    }
    for(int i = 0; i < n; i++) {
        minOperations += (maxValue - getRowSum(i, matrix, n));
    }
    return minOperations;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            for(int j = 0; j < n; j++) {
                int m;
                cin >> m;
                temp.push_back(m);
            }
            arr.push_back(temp);
        }
        int ans = findMinOperation(arr, n);
        cout << ans << endl;
    }
    return 0;
}


class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n + m - 2;
        int K = m - 1;
        double ans = 1;
        for (int i = 1; i <= K; ++i)
            ans = ans * (N - K + i) / i;
        return (int) ans;
    }
};

class Solution {
public:
    bool one(int n) {
        int squareRoot = sqrt(n);
        return (squareRoot * squareRoot == n);
    }
    bool two(int n) {
        unordered_set<int> st;
        for(int i = 1; i <= n; i++) {
            int temp = i*i;
            st.insert(temp);
            if(st.find(n - temp) != st.end()) return true;
        }
        return false;
    }
    bool three(int n) {
        while(n % 4 == 0) {
            n /= 4;
        }
        if(n % 8 != 7) return true;
        return false;
    }
    int numSquares(int n) {
        if(one(n)) return 1;
        if(two(n)) return 2;
        if(three(n)) return 3;
        return 4;
    }
};

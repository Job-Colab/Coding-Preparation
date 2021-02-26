int solve(int x, int y) {
    int a =x^y;
    return __builtin_popcount(a);
}

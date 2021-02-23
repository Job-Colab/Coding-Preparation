int solve(int x, int y) {
    int ans = 0;
    while(x != 0 && y != 0) {
        int one = x & 1;
        int two = y & 1;
        x = x >> 1;
        y = y >> 1;
        if(one != two) {
            ++ans;
        }
    }
    while(x != 0) {
        int one = x & 1;
        int two = 0;
        x = x >> 1;
        if(one != two) {
            ++ans;
        }
    }
    while(y != 0) {
        int one = 0;
        int two = y & 1;
        y = y >> 1;
        if(one != two) {
            ++ans;
        }
    }
    return ans;
}

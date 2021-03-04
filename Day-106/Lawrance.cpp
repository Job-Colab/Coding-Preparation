int solve(int n) {
    int digits = 0;
    int temp = n;
    while(temp != 0) {
        temp /= 10;
        ++digits;
    }
    int ans = 0;
    while(digits != 0) {
        int place = pow(10, digits - 1);
        if(((n / place) % 10) == 3) {
            int val = (n / place) % 10;
            ans = (ans * 10) + val;
        }
        else {
            ans = ((ans * 10) + 3) * (place) + (n % place);
            break;
        }
        --digits;
    }
    return ans;
}

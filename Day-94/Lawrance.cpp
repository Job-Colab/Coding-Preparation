int solve(string s) {
    int num = 0;
    for(int i = 0; i < s.size(); i++) {
        int temp = 0;
        while(s[i] >= '0' && s[i] <= '9') {
            temp = (temp * 10) + (s[i] - '0');
            i++;
        }
        num += temp;
    }
    return num;
}

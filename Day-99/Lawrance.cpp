string solve(string s) {
    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        char temp = s[i];
        while(temp == s[i]) {
            ++i;
        }
        --i;
        ans += temp;
    }
    return ans;
}


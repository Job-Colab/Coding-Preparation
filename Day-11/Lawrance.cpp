bool checkIfAlphabet(char ch) {
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

string caesarCipher(string s, int k) {
    string ans;
    for(char i : s) {
        char temp = i;
        if(checkIfAlphabet(i)) {
            int inter = i + k;
            if(temp >= 'A' && temp <= 'Z') {
                inter = inter - 'A';
                inter = inter % 26;
                temp = ('A' + inter) ;
            }
            else {
                inter = inter - 'a';
                inter = inter % 26;
                temp = ('a' + inter) ;
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0 || s == " ") return 0;
        if(s.size() == 1) return 1;
        int ans = 0;
        int num = s.size() - 1;
        for(int i = num; i >= 0; --i) {
            if(s[i] != ' ') ans++;
            else if(ans > 0) return ans;
        }
        return ans;
    }
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int *one = new int[128]{0};
        int *two = new int[128]{0};
        for(int i = 0; i < s.length(); i++) {
            if(one[s[i]] != two[t[i]]) return false;
            one[s[i]] = i + 1 ;
            two[t[i]] = i + 1 ;
        }
        return true;
    }
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int *a = new int[128]{0};
        int *b = new int[128]{0};
        for(int i =0;i<s.length();i++){
            if(a[s[i]]!=b[t[i]]) return false;
            a[s[i]]=i+1;
            b[s[i]]=i+1;
        }
        return true;
    }
};

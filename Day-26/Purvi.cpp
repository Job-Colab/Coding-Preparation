class Solution {
public:
    string defangIPaddr(string adr) {
        int i=0, j=0;
        string ans="";
        for(char a : adr)
        {
            if(a=='.')
                ans+="[.]";
            else
                ans+=a;
        }
        return ans;
    }
}